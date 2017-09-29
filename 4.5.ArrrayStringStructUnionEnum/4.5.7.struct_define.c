#include "stdio.h"


// 定义类型
struct people
{
	char name[20];
	int age;
	
	
};

/*
// 定义类型同时定义变量
struct student 
{
	char name[20];
	int age;
	
}s1;
*/


/*
// 将类型struct student重命名为s1，s1是一个类型名，不是一个变量
typedef struct student 
{
	char name[20];
	int age；
}s1;
*/

struct s
{
	char c;		// 1  c实际占4字节，而不是1个字节
	int a;		// 4  
};


int main(void)
{
	/*
	struct people p1;		// 定义变量
	
	s1.age = 20;
	
	printf("s1.age = %d.\n",s1.age);
	
	struct student s2;
	
	s2.age = 19;
	
	printf("s2.age = %d.\n",s2.age);
	*/
	
	struct s s1;
	
	s1.c = 'l';
	s1.a = 20;
	
	printf("sizeof(struct s) = %d.\n",sizeof(struct s));
	
	char *p1 = (char *)(&s1);
	printf("*p1 = %c.\n",*p1);
	
	
	int *p2 = (int *)((int)&s1 + 1);
	printf("*p2 = %d.\n",*p2);		//  336069764
	
	
	int *p3 = (int *)((int)&s1 + 4);
	printf("*p3 = %d.\n",*p3);		//  336069764
	
	
	return 0;
}
























