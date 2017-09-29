#include "stdio.h"

int main(void)
{
	int a[5] = {1,2,3,4,5};
	int *p;
	p = a;									// a做右值表示数组首元素的首地址，等同于&a[0]
	/*
	printf("a[3] = %d.\n",a[3]);			// 数组方式访问
	
	printf("*(a+3) = %d.\n",*(a+3));		// 指针方式访问
	
	printf("*(&a[3]) = %d.\n",*(&a[3]));	// 指针方式访问
	
										
	printf("*(p+3) = %d.\n",*(p+3));		// a[3]
	printf("*(p-1) = %d.\n",*(p-1));		// a[-1]
	
	p = &a[2];								
	printf("*(p+2) = %d.\n",*(p+2));		// a[4]	

	p = &a[2];									
	printf("*(p-1) = %d.\n",*(p-1));		// a[1]	
	printf("*(p+3) = %d.\n",*(p+3));		// a[5]
	*/
	
	printf("*(p+1) = %d.\n",*(p+1));
	printf("*(p+1) = %d.\n",*((char *)p+1));
	printf("*(p+1) = %d.\n",*(int *)((unsigned int)p+1));
	
	
	char *p2;
	p2 = (char *)p;
	printf("*(p+1) = %d.\n",*(p2+1));
	return 0;
}































