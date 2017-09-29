#include "stdio.h"

/*
// 结构体类型的定义
struct student
{
	char name[20];
	int age;
};
*/

// 定义了一个结构体类型，这个结构体有两个类型名，一个是原名，另一个是重命名的
typedef struct student
{
	char name[20];
	int age;
}stu;

// 一次定义了两个类型：
// 第一个是结构体指针类型：有两个名字：struct teacher，teacher
// 第二个是结构体指针类型，有两个名字：struct teacher *，pTteacher
typedef struct teacher
{
	char name[20];
	int age;
	int mager;
}teacher,*pTeacher;
int main(void)
{
	/*
	struct student s1;			// 定义了一个变量，struct student是类型，s1是变量。
	//student s2;
	stu s2;
	
	s1.age = 20;
	*/
	
	stu *pS1;
	struct student *pS2;
	
	teacher t1;
	t1.age = 25;
	pTeacher p1 = &t1;
	
	printf("teacher age = %d\n",p1 -> age);
	
	
	return 0;
}




























