#include "stdio.h"

int main(void)
{
	/*
	int *p;		// 局部变量分配在栈上面，值是随机的
	
	
	printf("p = %p.\n",p);
	
	
	*p = 4;		//Segmentation fault (core dumped)运行时的段错误，野指针造成的
	*/
	
	int *p = NULL;
	int a = 0;
	
	// 中间很多代码...........
	p = &a;			// 正确的使用指针的方式就是解引用前给一个绝对可以用的地址绑定
	
	//if(p != NULL)
	if (NULL != p)
	{
		*p = 4;
	}
	p = NULL;		// 使用完指针变量后，记得将其重新赋值为NULL
	
	printf("a = %d\n", a);
	
	return 0;
}























