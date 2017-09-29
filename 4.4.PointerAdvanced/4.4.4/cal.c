#include "stdio.h"
#include "cal.h"

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int main(void)
{
	struct cal_t mycal;
	
	mycal.x = 12;
	mycal.y = 54;
	mycal.p1 = add; 
	
	mycal.ret = calculator(&mycal);
	printf("ret = %d.\n",mycal.ret);
	
	return 0;
}


// 应该写实际业务关联的代码
int add(int a,int b)
{
	return a + b;
}

int sub(int a,int b)
{
	return a - b;
}

int mul(int a,int b)
{
	return a * b;
}

int div(int a,int b)
{
	return a / b;
}


























