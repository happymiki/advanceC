#include "stdio.h"

int main(void)
{
	// ��λ�Ͱ��߼�ȡ��
	/*
	unsigned int a = 45;	// 0x2d 00101101
	unsigned int b, c;
	
	b = ~a;		// ��λȡ�������λ������1��0��0��1��0xd2 11010010
	c = !a;		// �߼�ȡ�������٣��ٱ���
	
	printf("b = %u.\r\n",b);
	printf("c = %u.\r\n",c);
	*/
	
	// ��λ�Ͱ��߼�ȡ����ȡ��
	/*
	unsigned int a = 45;	// 0x2d 00101101
	unsigned int b, c;
	
	b = ~~a;		// ��λȡ�������λ������1��0��0��1��0xd2 11010010
	c = !!a;		// �߼�ȡ�������٣��ٱ���
	
	printf("b = %u.\r\n",b);
	printf("c = %u.\r\n",c);
	*/
	
	// ��λ���
	unsigned int a = 45;	// 0x2d 00101101
	unsigned int b = 23, c;	// 0x17 00010111
	
	c = a ^ b;		// ��λ���	00111010 58
	
	printf("c = %u.\r\n",c);
	
	return 0;
}