#include "stdio.h"

int main(void)
{
	/*
	int a = 10;
	
	printf("a = %d.\n",a);
	
	printf("a = %f.\n",a);		// 一个很奇怪的数字“-0.094960”
	
	printf("a = %c.\n",a);
	*/
	/*
	int a = 5;
	int *p1;
	float *p;
	
	p1 = &a;						
	p = (float *)p1;
	
	printf("*p1 = %d.\n",*p1);
	printf("*p = %f.\n",*p);
	*/
	/*
	int a = 66666;
	char *p1 = &a;
	
	printf("*p1 = %c.\n",*p1);
	printf("*p1 = %d.\n",*p1);
	
	short *p2 = &a;
	
	printf("*p2 = %d.\n",*p2);
	*/
	
	int a[5] = {0x11223344,0x55667788};
	
	int *p1 = a;
	
	printf("*p1 = 0x%x.\n",*p1);
	
	char *p2 = (char *)a;
	
	printf("*p2 = 0x%x.\n",*p2);		// 44
	printf("*p2 = 0x%x.\n",*(p2+1));	// 33	
	printf("*p2 = 0x%x.\n",*(p2+2));	// 22
	printf("*p2 = 0x%x.\n",*(p2+3));	// 11
	printf("*p2 = 0x%x.\n",*(p2+4));
	printf("*p2 = 0x%x.\n",*(p2+5));

	
	return 0;
}





























