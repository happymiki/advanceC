#include "stdio.h"



// �������ܷ��غ����ڲ��ֲ������ĵ�ַ����Ϊ�������ִ�����˷��غ�����ֲ������Ѿ�������
// ����ֲ������Ƿ�����ջ�ϵģ���Ȼ���ڣ�����ջ�ڴ滹�ڣ������Է��ʣ����Ƿ���ʱʵ�������
// �ڴ��ַ�Ѿ��͵�ʱ�Ǹ������޹��ˡ�
int *func(void)
{
	int a = 4;		// a�Ǿֲ�������������ջ�ϣ��ֽ�ջ�������ֽ���ʱ����
	
	printf("&a = %p.\n",&a);
	
	return &a;
	
}

void func2(void)
{
	int a = 6;
	int b = 7;
	int c = 10;
}

void stack_overflow(void)
{
	int a[10000000] = {0};
	
	a[10000000-1] = 12;
}

void stack_overflow2(void)
{
	int a = 2;
	stack_overflow2();
	
}

int main(void)
{
	/* 
	int *p;
	
	p = func();
	func2();

	
	printf("p = %p.\n",p);
	
	printf("*p = %d.\n",*p);	// ֤��ջ�ڴ�����֮�������
	*/
	
	/*
	stack_overflow();
	*/
	
	stack_overflow2();
	return 0;
	
}
























