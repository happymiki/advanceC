#include "stdio.h"

// &a��&x��ͬ��˵������ͬһ�����������ڴ���a��x�����������ڴ�ռ䣩
// ����a��x���ɹ����ģ�ʵ����a��x��ֵ�õ���
/*
void fun1(int a)
{
	// �ں����ڲ����β�a��ֵ����ʵ��x
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
	char a;				// �ṹ�������������
	int b;				// ��ΪҪ������
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
	printf("&a1 = %p.\n",&a1);			// ����ָ��
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
	
	swap1(x,y);						// ����ʧ��
	
	printf("x=%d,y=%d.\n",x,y);
	
	x = 3,y = 5;
	swap2(&x,&y);					// �����ɹ�
	printf("x=%d,y=%d.\n",x,y);
	
	return 0;
}







