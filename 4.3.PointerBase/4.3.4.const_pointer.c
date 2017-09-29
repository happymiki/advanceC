#include "stdio.h"


int main(void)
{
	/*
	int a;
	// 第一种
	const int *p1;				// 表示：p本身不是const的，而p指向的变量是const的
	
	// 第二种
	int const *p2;				// 表示：p本身不是const的，而p指向的变量是const的
	
	
	// 第三种
	int * const p3;				// 表示：p本身是const的，p指向的变量不是const的
	
	// 第四种  
	const  int   *  const p4;	// 表示：p本身是const的，p指向的变量也是const的
	
	*p1 = 3;					// error: assignment of read-only location ‘*p1’
	p1 = &a;					// 无警告无错误
	
	*p2 = 4;					// error: assignment of read-only location ‘*p2’
	p2 = &a;					// 无警告无错误
	
	*p3 = 5;					// 无警告无错误
	p3 = &a;					// error: assignment of read-only variable ‘p3’
	
	*p4 = 6;					// error: assignment of read-only location ‘*p4’
	p4 = &a;					// error: assignment of read-only variable ‘p4’
	*/
	
	const int a = 5;
	int  *p;
	
	//a = 6;					//  error: assignment of read-only variable ‘a’
	
	p =(int *)&a;
	*p = 7;
	
	printf("a = %d.\n",a);		// a = 7,结果证明const类型的变量被改了
	return 0;
}

























