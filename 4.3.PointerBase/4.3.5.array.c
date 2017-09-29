#include "stdio.h"

int main(void)
{
	/*
	int a[4];			// 一次定义一个数组，包含四个int型变量
	
	int a,b,c,d;		// 分开独立定义四个变量
	// 注意数组和指针在初始化时，后平时赋值不同
	int a[18] = {1,3,5,0};		// 定义的时候初始化
	int *p = 9；				
	
	a[0] = 2;
	a[1] = 5;
	
	a = {1,2,3,4};		// 数组只能单个访问
	*/
	
	int a[4] = {1,2,3,4};
	
	//a = {1,2,3,4};
	//&a = {1,2,3,4};			// error: lvalue required as left operand of assignment
	//&a[0] = 10;					// error: lvalue required as left operand of assignment
	
	printf("a:0x%x.\n",a);
	
	printf("&a:0x%x.\n",&a);
	
	printf("&a[0]:0x%x.\n",&a[0]);
	
	return 0;
}





























