#include "stdio.h"
#include "string.h"

void func1(void)
{
	printf("func1.\n");
}

// 这句重命名了一种类型，这个新类型名字叫pType，类型是：char* (*)(char *, const char *);
typedef char* (*pType)(char *, const char *);
// 函数指针数组
typedef char* (*pType[5])(char *, const char *);
// 函数指针数组指针
typedef char* (*(*pType)[5])(char *, const char *);

int main(void)
{
	/*
	int *p;
	
	int a[5];
	//int a[10];
	//double a[10];
	
	p = a;			// 类型是匹配的，所以编译器不会报警告，不会报错。
	//p = &a;			//  warning: assignment from incompatible pointer type
					// l类型不匹配，p是int *的，&a是int (*)[5];
					
	int (*p1)[5]; 
	
	p1 = &a;		// p1是int (*)[5];&a也是这个类型。
	*/
	
	/*
	void (*pFunc)(void);
	
	//pFunc = func1;			// 左边是一个函数指针变量，右边是函数名。
	
	pFunc = &func1;			// 说明&func1和func1做右值时一模一样的，没有任何区别
	
	pFunc();				// 用函数指针解引用来调用函数。

	*/
	
	char a[5] = {0};
	pType pFunc;
	// char* (*pFunc)(char *, const char *);		// 返回值为char *类型
	
	pFunc = strcpy;
	
	pFunc(a,"abcd");
	
	printf("a = %s.\n",a);
	
	return 0;
}































