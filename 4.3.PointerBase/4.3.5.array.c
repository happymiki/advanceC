#include "stdio.h"

int main(void)
{
	/*
	int a[4];			// һ�ζ���һ�����飬�����ĸ�int�ͱ���
	
	int a,b,c,d;		// �ֿ����������ĸ�����
	// ע�������ָ���ڳ�ʼ��ʱ����ƽʱ��ֵ��ͬ
	int a[18] = {1,3,5,0};		// �����ʱ���ʼ��
	int *p = 9��				
	
	a[0] = 2;
	a[1] = 5;
	
	a = {1,2,3,4};		// ����ֻ�ܵ�������
	*/
	
	int a[4] = {1,2,3,4};
	
	//a = {1,2,3,4};
	//&a = {1,2,3,4};			// error: lvalue required as left operand of assignment
	//&a[0] = 10;					// error: lvalue required as left operand of assignment
	
	printf("a:0x%x.\n",a);
	
	printf("&a:0x%x.\n",&a);
	
	printf("&a[0]:0x%x.\n",&a[0]);
	
	return 0;
}





























