#include "stdio.h"

/* ���������͵Ķ��� */
/* ���ڽ�����ʽ��ͬ�����Դ�ӡ���ݲ�ͬ */
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
	/* ����������Ķ��� */
	union myunion u1;  
	
	/* ������Ԫ�ص�ʹ�� */
	u1.a = 120;		/* u1.a��u1.b����ȵ� */
	printf("u1.b = %d.\n",u1.b);
	printf("u1.a = %p.\n",&u1.a);
	printf("u1.b = %p.\n",&u1.b);
	
	
	struct mystruct s1;
	s1.a = 23;		/* s1.a��s1.b�Ƕ����޹ص� */
	printf("s1.b = %d.\n",s1.b);
	printf("s1.a = %p.\n",&s1.a);
	printf("s1.b = %p.\n",&s1.b);
	
	
	return 0;
}

























