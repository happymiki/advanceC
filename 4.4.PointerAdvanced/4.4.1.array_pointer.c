#include "stdio.h"

int main(void)
{
	int *p1[5];			// 指针数组，是一个数组，每个元素存放指向int类型的指针变量，
	int (*p2)[5];		// 数组指针，是一个指针，指针指向int类型的有5个元素的数组.
	int *(p3[5]);		// 指针数组
	
	
	int a[5]={0,1,2,3,4};
	int b = 5,c = 6;
	
	p1[0] = &b;
	p1[1] = &c;
	
	p2 = &a;
	
	printf("p1[0] = %p\n",p1[0]);
	printf("*p1[0] = %d\n",*p1[0]);
	printf("p1[1] = %p\n",p1[1]);
	printf("*p1[1] = %d\n",*p1[1]);
	
	printf("p2 = %p\n",p2);
	printf("*p2 = %d\n",*(p2+1));
	
	return 0;
}


















