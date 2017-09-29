#include "stdio.h"



// 函数不能返回函数内部局部变量的地址，因为这个函数执行完了返回后，这个局部变量已经不在了
// 这个局部变量是分配在栈上的，虽然不在，但是栈内存还在，还可以访问，但是访问时实际上这个
// 内存地址已经和当时那个变量无关了。
int *func(void)
{
	int a = 4;		// a是局部变量，分配在栈上，又叫栈变量，又叫临时变量
	
	printf("&a = %p.\n",&a);
	
	return &a;
	
}

void func2(void)
{
	int a = 6;
	int b = 7;
	int c = 10;
}

void stack_overflow(void)
{
	int a[10000000] = {0};
	
	a[10000000-1] = 12;
}

void stack_overflow2(void)
{
	int a = 2;
	stack_overflow2();
	
}

int main(void)
{
	/* 
	int *p;
	
	p = func();
	func2();

	
	printf("p = %p.\n",p);
	
	printf("*p = %d.\n",*p);	// 证明栈内存完了之后是脏的
	*/
	
	/*
	stack_overflow();
	*/
	
	stack_overflow2();
	return 0;
	
}
























