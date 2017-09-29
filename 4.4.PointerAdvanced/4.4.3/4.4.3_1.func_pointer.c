#include "stdio.h"

// 定义了一个类型pFunc，这个函数指针类型指向一种特定参数列表和返回值的函数
typedef int (*pFunc)(int,int);

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int main(void)
{
	pFunc p1 = NULL;
	int x=0,y=0,result=0;
	char c = 0;
	
	printf("Pelase input operation two int num:\n");
	scanf("%d %d",&x,&y);
	
	printf("Pelase input operation type；+ or - or * or /\n");
	
	do
	{
		scanf("%c",&c);
	}while ((c != '+') && (c != '-') && (c != '*') && (c != '/'));
	
	
	// 加一句调试
	switch (c)
	{
		case '+':
			p1 = add; break;
		case '-':
			p1 = sub; break;
		case '*':
			p1 = mul; break;
		case '/':
			p1 = div; break;
		default: 
		p1 = NULL; break;
	}
	result = p1(x,y);
	
	printf("%d %c %d = %d\n",x,c,y,result);
	
	
	
	return 0;
}


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



























