#include "stdio.h"

// &a和&x不同，说明不是同一个变量（在内存中a，x独立的两个内存空间）
// 但是a和x是由关联的，实际上a是x赋值得到的
/*
void fun1(int a)
{
	// 在函数内部，形参a的值等于实参x
	printf("a = %d\n",a);
	printf("in fun1, &a = %p\n",&a);
}
*/
/*
void fun2(int a[])
{
	printf("sizeof(a) = %d.\n",sizeof(a));
	
	printf("in fun2,a = %p.\n",a);
} 
*/

/*
void fun3(int *a)
{
	printf("sizeof(a) = %d.\n",sizeof(a));
	
	printf("in fun2,a = %p.\n",a);
} 
*/

struct A
{
	char a;				// 结构体变量对齐问题
	int b;				// 因为要对齐存放
};

void fun4(struct A a1)
{
	printf("sizeof(a1) = %d.\n",sizeof(a1));
	printf("&a1 = %p.\n",&a1);
	printf("a1.b = %d.\n",a1.b);
}

void fun5(struct A *a1)
{
	printf("sizeof(a1) = %d.\n",sizeof(a1));
	printf("sizeof(*a1) = %d.\n",sizeof(*a1));
	printf("&a1 = %p.\n",&a1);			// 二重指针
	printf("a1 = %p.\n",a1);
	printf("a1.b = %d.\n",a1->b);
}

void swap1(int a,int b)
{
	int tmp;
	
	tmp = a;
	a = b;
	b = tmp;
	
	printf("int swap1,a=%d,b=%d.\n",a,b);
}

void swap2(int *a,int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
	
	printf("int swap1,a=%d,b=%d.\n",*a,*b);
}
 
int main(void)
{
	/*
	int x = 4;
	
	printf("&x = %p\n",&x);
	fun1(x);
	*/
	
	/*
	int b[5];
	
	fun2(b);
	
	printf("b = %p.\n",b);
	*/
	
	/*
	int b[5];
	
	fun3(b);
	printf("b = %p.\n",b);
	*/
	
	/*
	struct A b1 = 
	{
		.a = 23,
		.b = 286,
	};

	printf("sizeof(b1) = %d.\n",sizeof(b1));
	printf("&b1 = %p.\n",&b1);
	printf("b1.d = %d.\n",b1.b);	
	
	fun4(b1);
	*/
	
	/*
	struct A b1 = 
	{
		.a = 23,
		.b = 286,
	};

	printf("sizeof(b1) = %d.\n",sizeof(b1));
	//printf("sizeof(*b1) = %d.\n",sizeof(*b1));
	printf("&b1 = %p.\n",&b1);
	// printf("&b1 = %p.\n",b1);
	printf("b1.b = %d.\n",b1.b);	
	
	fun5(&b1);	
	*/
	
	int x = 3,y = 5;
	
	printf("x=%d,y=%d.\n",x,y);
	
	swap1(x,y);						// 交换失败
	
	printf("x=%d,y=%d.\n",x,y);
	
	x = 3,y = 5;
	swap2(&x,&y);					// 交换成功
	printf("x=%d,y=%d.\n",x,y);
	
	return 0;
}







