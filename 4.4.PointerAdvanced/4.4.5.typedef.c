#include "stdio.h"

/*
// �ṹ�����͵Ķ���
struct student
{
	char name[20];
	int age;
};
*/

// ������һ���ṹ�����ͣ�����ṹ����������������һ����ԭ������һ������������
typedef struct student
{
	char name[20];
	int age;
}stu;

// һ�ζ������������ͣ�
// ��һ���ǽṹ��ָ�����ͣ����������֣�struct teacher��teacher
// �ڶ����ǽṹ��ָ�����ͣ����������֣�struct teacher *��pTteacher
typedef struct teacher
{
	char name[20];
	int age;
	int mager;
}teacher,*pTeacher;
int main(void)
{
	/*
	struct student s1;			// ������һ��������struct student�����ͣ�s1�Ǳ�����
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




























