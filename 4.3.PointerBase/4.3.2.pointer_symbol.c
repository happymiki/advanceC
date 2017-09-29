#include "stdio.h"

int main(void)
{
	// 演示指针变量定义
	/*
	// 把*好和指针变量放在一起，是为了一行定义多个变量是好理解。
	int *p5,*p6;			// 定义了2个int *指针变量p5，p6
	int *p5, p6;			// p5是int *指针，p6是int的普通变量(好理解)
	int* p5,p6;				// p5是int *指针，p6是int的普通变量，容易误解为两个都是指针
	
	int a = 4; 
	int *p1;				// *和int结合，表明p的类型是int *。p是指向int类型的指针。
	
	int* p2;				// 实际编译测试没问题，所以四种写法编译器认为是一样的。
	
	int*p3;
	
	int * p4;
	
	p1 = &a;
	p2 = &a; 
	p3 = &a;
	p4 = &a;
	*/
	
	// 演示指针变量的解引用
	/*
	int a = 12;
	int b = 0;
	
	int *p;					// 这个*p就是星号的第一种用法
	
	p = &a;
	b = *p;					// 这个*p就是星号的第二种用法
	printf("b = %d.\n",b);
	*/
	
	/*
	int a;					// &a就表示a的地址
	int *p;
	
	p = &a;					// 把变量a的地址赋值给p
	*/
	
	int a = 3,b = 5;
	
	a = b;
	
	return 0;
}































