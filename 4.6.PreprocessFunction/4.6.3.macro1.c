#include "stdio.h"

//#define M 10
//#define N M

#define X(a,b)	((a)+(b))

#define MAX(a,b)	(((a)>(b)) ? (a) : (b))

#define SEC_PER_YEAR	(365*24*60*60UL)

int main (void)
{
	/*
	// int a[N] = {1.2.3};

	// int b[10] = {4,5,6};
	*/
	/*
	int x = 1,y = 2;
	
	int c = 3 * X(x,y);
	printf("c = %d.\n",c);
	*/
	/*
	int x=3,y=4;
	int max = MAX(x+2,y);
	
	printf("max=%d",max);
	*/
	
	unsigned int i = SEC_PER_YEAR;
	printf("i = %d.\n",i);
	
	return 0;
}














