#include "stdio.h"


int main(void)
{
	/*
	int a;
	// ��һ��
	const int *p1;				// ��ʾ��p������const�ģ���pָ��ı�����const��
	
	// �ڶ���
	int const *p2;				// ��ʾ��p������const�ģ���pָ��ı�����const��
	
	
	// ������
	int * const p3;				// ��ʾ��p������const�ģ�pָ��ı�������const��
	
	// ������  
	const  int   *  const p4;	// ��ʾ��p������const�ģ�pָ��ı���Ҳ��const��
	
	*p1 = 3;					// error: assignment of read-only location ��*p1��
	p1 = &a;					// �޾����޴���
	
	*p2 = 4;					// error: assignment of read-only location ��*p2��
	p2 = &a;					// �޾����޴���
	
	*p3 = 5;					// �޾����޴���
	p3 = &a;					// error: assignment of read-only variable ��p3��
	
	*p4 = 6;					// error: assignment of read-only location ��*p4��
	p4 = &a;					// error: assignment of read-only variable ��p4��
	*/
	
	const int a = 5;
	int  *p;
	
	//a = 6;					//  error: assignment of read-only variable ��a��
	
	p =(int *)&a;
	*p = 7;
	
	printf("a = %d.\n",a);		// a = 7,���֤��const���͵ı���������
	return 0;
}

























