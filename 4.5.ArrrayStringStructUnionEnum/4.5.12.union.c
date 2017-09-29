#include "stdio.h"

/* 共用体类型的定义 */
/* 由于解析方式不同，所以打印数据不同 */
union myunion
{
	int a;
	char b; 
};

struct mystruct 
{
	int a;
	char b;
};


int main(void)
{
	/* 共用体变量的定义 */
	union myunion u1;  
	
	/* 共用体元素的使用 */
	u1.a = 120;		/* u1.a和u1.b是相等的 */
	printf("u1.b = %d.\n",u1.b);
	printf("u1.a = %p.\n",&u1.a);
	printf("u1.b = %p.\n",&u1.b);
	
	
	struct mystruct s1;
	s1.a = 23;		/* s1.a和s1.b是独立无关的 */
	printf("s1.b = %d.\n",s1.b);
	printf("s1.a = %p.\n",&s1.a);
	printf("s1.b = %p.\n",&s1.b);
	
	
	return 0;
}

























