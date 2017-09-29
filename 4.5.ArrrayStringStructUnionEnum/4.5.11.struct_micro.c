#include "stdio.h"

struct mystruct 
{
	char a;		// 0 
	int b;		// 4	
	short c;	// 8
};

/*
 	TYPE:结构体类型
	MEMBER:结构体中一个元素的元素名
	
*/
/* 这个宏返回的是member元素相对于整个结构体变量首地址的偏移量 */
#define offsetof(TYPE,MEMBER)	((int) &((TYPE *)0) -> MEMBER)

/* 
	ptr:指向结构体元素member的指针
	type:结构体类型
	member：结构体中一个元素的元素名
*/
/* 这个宏返回的就是整个结构体变量的指针，类型是（type *） */
#define container_of(ptr,type,member)	({		\
	const typeof(((type *)0)->member) *__mptr = (ptr);	\
	(type *)((char *)__mptr - offsetof(type,member));})

int main(void)
{
	/*
	struct mystruct s1;

	s1.b = 12;
	
	int *p = (int *)((char *)&s1 + 4);
	
	printf("*p = %d.\n",*p);
	
	int offsetofa = offsetof(struct mystruct,a);
	printf("offsetofa = %d.\n",offsetofa);
	
	int offsetofb = offsetof(struct mystruct,b);
	printf("offsetofb = %d.\n",offsetofb);
	
	int offsetofc = offsetof(struct mystruct,c);
	printf("offsetofc = %d.\n",offsetofc);
	
	printf("整个结构体变量的首地址：%p.\n",&s1);
	printf("s1.b的首地址：%p.\n",&(s1.b));
	printf("偏移量是：%d.\n",(int)&(s1.b) - (int)&s1);
	*/
	
	struct mystruct s2;
	
	struct mystruct *ps = NULL;
	
	short *p = &(s2.c);		// p就是指向结构体中某个成员member的指针
	
	printf("s2的指针等于：%p.\n",&s2);
	
	/* 问题是要通过p来计算得到s2的指针 */
	ps = container_of(p,struct mystruct,c);
	printf("ps等于：%p.\n",ps);
	
	
	return 0;
}





























