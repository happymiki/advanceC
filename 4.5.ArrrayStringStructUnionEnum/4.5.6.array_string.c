#include "stdio.h"
#include "string.h"



int my_strlen(const char *p)
{
	/*
	int cnt = 0;
	
	while (*p != '\0')
	{
		cnt ++;
		p ++;
	}
	*/
	
	int cnt = 0;
	for (;*p++ != '\0';cnt ++);
	
	return cnt;
}



int main(void)
{
	/*
	char *p = "linux";
	
	int len = my_strlen(p);
	
	
	
	printf("len = %d.\n",len);
	*/
	/*
	char a[5];
	
	printf("sizeof(a) = %d.\n",sizeof(a));		// 5
	
	printf("strlen(a) = %d.\n",strlen(a));		// 5
	*/
	
	/*
	char a[5]={0};
	
	printf("sizeof(a) = %d.\n",sizeof(a));		// 5
	
	printf("strlen(a) = %d.\n",strlen(a));		// 0
	*/

	/*
	char a[5]={2,3};
	
	printf("sizeof(a) = %d.\n",sizeof(a));		// 5
	
	printf("strlen(a) = %d.\n",strlen(a));		// 2

	*/

	/*
	char a[5]="lin";
	
	printf("sizeof(a) = %d.\n",sizeof(a));		// 5
	
	printf("strlen(a) = %d.\n",strlen(a));		// 3
	*/

	/*
	char a[5]="linux c";
	
	printf("sizeof(a) = %d.\n",sizeof(a));		// 5
	
	printf("strlen(a) = %d.\n",strlen(a));		// 5
	*/
	
	char a[] = "linux";
	
	printf("sizeof(a) = %d.\n",sizeof(a));		// 6
	
	printf("strlen(a) = %d.\n",strlen(a));		// 5

	return 0;
}























