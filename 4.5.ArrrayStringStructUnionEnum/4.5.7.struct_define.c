#include "stdio.h"


// ��������
struct people
{
	char name[20];
	int age;
	
	
};

/*
// ��������ͬʱ�������
struct student 
{
	char name[20];
	int age;
	
}s1;
*/


/*
// ������struct student������Ϊs1��s1��һ��������������һ������
typedef struct student 
{
	char name[20];
	int age��
}s1;
*/

struct s
{
	char c;		// 1  cʵ��ռ4�ֽڣ�������1���ֽ�
	int a;		// 4  
};


int main(void)
{
	/*
	struct people p1;		// �������
	
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
























