#include "stdio.h"

int main(void)
{
	// bit8~bit15����
	/*
	unsigned int a = 0x12aaaaa4;
	unsigned int b = 0xffff00ff;
	unsigned int c;
	
	c = a & b;		// 0xaaaa00aa
		
	printf("a & b = 0x%x\r\n",c);	
	*/
	
	// ��bit13~bit21���㣬����λ����
	/*
	unsigned int a = 0x12aaaaa4;
	unsigned int b = 0xffc01fff;
	unsigned int c;
	
	c = a & b;		// 0x12800aa4
	
	printf("a & b = 0x%x\r\n",c);	
	*/
	
	/*
	// ��bit15~bit21��1������λ����
	unsigned int a = 0x12aaaaa4;
	unsigned int b = 0x003f8000;
	unsigned int c;
	
	c = a | b;		// 0x12800aa4
	
	printf("a & b = 0x%x\r\n",c);
	*/
	
	// ��bit14~bit20ȡ��������λ����
	unsigned int a = 0x12aaaaa4;
	unsigned int b = 0x001fc000;
	unsigned int c;
	
	c = a ^ b;		// 0x12800aa4
	
	printf("a & b = 0x%x\r\n",c);	
	
	return 0;
}

















