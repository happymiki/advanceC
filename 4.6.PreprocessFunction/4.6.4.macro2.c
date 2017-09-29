#include <stdio.h>

#define MAX(a,b)	(((a)>(b)) ? (a) : (b))

int inline  max(int a,int b)
{
	if (a>b)
		return a;
	else
		return b;
	
}

#define DEBUG
#undef DEBUG

#ifdef DEBUG
#define debug(x)	printf(x) 
#else
#define debug(x)
#endif

int main(void)
{
	int a=3,b=5,c=0;
	
	c = MAX(a,b);	// ԭ��չ����c = (((a)>(b)) ? (a) : (b))
	 
	printf("c = %d.\n",c);

	c = max(a,b);	// �޷�չ����ֻ�ܵ���
	
	printf("c = %d.\n",c);

	debug("this is a debug info.\n");
	
	
	return 0;
}














