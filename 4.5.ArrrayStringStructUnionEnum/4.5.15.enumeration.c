#include "stdio.h"


// 表示函数的返回值，ERROR:表示错，RIGHT:表示对
enum return_value
{
	ERROR = 23,		// 全局变量，可以直接使用
	RIGHT = 25,
};


enum return_value fun1(void) 
{d
	enum return_value R1;
	R1 = ERROR;
	return R1;
}  

int main(void)
{
	
	enum return_value r1;
	
	r1 = fun1();
	
	if (r1 == ERROR)
	{
		printf("函数执行错误.\n");
	}
	else
	{
		printf("函数执行正确.\n");
	}
	
	printf("ERROR = %d.\n",ERROR);
	printf("RIGTH = %d.\n",RIGHT);
	
	return 0;
}