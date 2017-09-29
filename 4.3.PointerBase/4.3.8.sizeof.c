#include "stdio.h"
#include "string.h"

#define dpChar char *
typedef char * tpChar;		// typedef用来重命名类型，或者用来制造用户自定义类型
				
// 完全等同于fun1
void fun(int b[])
{
	printf("sizeof(b):%d.\n",sizeof(b));
}

void fun1(int *b)
{
	printf("sizeof(b):%d.\n",sizeof(b));
}

void fun2(int *b,int num)
{
	// b是数组的指针（首地址），num是数组的大小。
}

int main(void)
{
	/*
	char str[] = "hello";  
	
	printf("sizeof(str):%d.\n",sizeof(str));			// 6
	printf("sizeof(str[0]):%d.\n",sizeof(str[0]));		// 1
	printf("strlen(str):%d.\n",strlen(str));			// 5,不包含\0
	*/
	
	/*
	char str[] = "hello"; 
	char *p = str;     
	
	printf("sizeof(p):%d.\n",sizeof(p));				// 4,相当于sizeof（char *）
	printf("sizeof(*p):%d.\n",sizeof(*p));				// 1,相当于sizeof（char）
	printf("strlen(p):%d.\n",strlen(p));				// 5
	*/
	
	/*
	int n = 10;                                
	
	printf("sizeof(n):%d.\n",sizeof(n));
	printf("sizeof(int):%d.\n",sizeof(int));
	*/
	
	/*
	int b[100]; 

	printf("sizeof(b):%d.\n",sizeof(b));				// 100 * sizeof(int) = 400
	*/
	
	/*
	int a[20];
	
	fun(a);			// 4,因为a在函数func内部就是指针，而不是数组。
	fun1(a);
	
	fun2(a,sizeof(a));
	*/
	
	/*
	dpChar p1,  p2; 							// 展开，char *p1，p2，相当于char *p1，char p2;
	tpChar p3,  p4;                      		// 展开，相当于char *p3，*p4
	
	printf("sizeof(p1):%d.\n",sizeof(p1));		// 4
	printf("sizeof(p2):%d.\n",sizeof(p2));		// 1
	
	printf("sizeof(p3):%d.\n",sizeof(p3));		// 4
	printf("sizeof(p4):%d.\n",sizeof(p4));		// 4
	*/
	
	/*
	int a[100];
	int b = sizeof(a)/sizeof(a[0]);		// 整个数组的字节数除以一个元素的字节数，
										// 得到结果就是数组元素个数
	
	printf("b:%d.\n",b);
	*/
	
	return 0;
}


































