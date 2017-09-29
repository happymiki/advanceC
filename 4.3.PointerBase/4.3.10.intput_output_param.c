#include "stdio.h"

int multip5(int a);
void multip5_2(void);
int multip5_3 (int a,int *p);

void func1(int *p);
void func2(const int *p);

void func3(char *p);
void func4(const char *p);

int x;		// 被乘数
int y;		// 结果


int main(void)
{
	/*
	// 程序要完成的功能是对一个数乘以5
	// 第一种：函数传参
	int a = 3;
	int b;
	
	b = multip5(a);
	
	printf("result = %d.\n",b);
	
	// 第二种：用全局变量传参
	x = 2;
	multip5_2();
	
	printf("result2 = %d.\n",y);
	*/
	
	/*
	int a = 1;
	
	func1(&a);
	func2(&a);
	*/
	
	/*
	//char *pStr = "linux";			//编译未报问题
	
	char pStr[] = "linux";			// ok
	func3(pStr);
	printf("pStr = %s.\n",pStr);
	*/
	int a,ret = -1,b = 0;
	
	a = 30;
	
	ret = multip5_3(a,&b);
	if((-1) == ret)
	{
		printf("error.\n");
	}
	else
	{
		printf("b = %d.\n",b);
	}
	
	return 0;
}

/*
int multip5(int a)
{
	
	return a*5;
}


void multip5_2(void)
{
	
	y = x*5;
}
*/
/*
void func1(int *p)
{
	*p = 5;
	
}

void func2(const int *p)
{
	*p = 5;
	
}
*/
void func3(char *p)
{
	*p = 'a';
}


/*
void func4(const char *p)
{
	*p = 'a';
}
*/

int multip5_3 (int a,int *p)
{
	int tmp;
	
	tmp = a*5;
	if (tmp > 100)
	{
		return -1;
	} 
	else
	{
		*p = tmp;
		return 0;
	}
	
}



















