#include "stdio.h"

int main(void)
{
	char *p = "linux";
	
	*(p+0) = 'f';		// "finux"
	
	printf("p = %s.\n",p);
	
	
	return 0;
}




























