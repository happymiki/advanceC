// 用递归函数计算阶乘
#include <stdio.h>

int recurive(int n);

int main(void)
{
	int a=5;
	
	printf("%d的阶乘是%d.\n",a,recurive(a));
	
	
	return 0;
}

int recurive(int n)
{
	if (n < 1)
	{
		printf("n必须大于等于1.\n");
	}
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return (n*recurive(n-1));
		
	}
	
	
		
}























