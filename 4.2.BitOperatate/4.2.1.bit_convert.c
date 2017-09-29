#include "stdio.h"

int main(void)
{
	// 按位和按逻辑取反
	/*
	unsigned int a = 45;	// 0x2d 00101101
	unsigned int b, c;
	
	b = ~a;		// 按位取反，逐个位操作，1变0，0变1，0xd2 11010010
	c = !a;		// 逻辑取反，真变假，假变真
	
	printf("b = %u.\r\n",b);
	printf("c = %u.\r\n",c);
	*/
	
	// 按位和按逻辑取反再取反
	/*
	unsigned int a = 45;	// 0x2d 00101101
	unsigned int b, c;
	
	b = ~~a;		// 按位取反，逐个位操作，1变0，0变1，0xd2 11010010
	c = !!a;		// 逻辑取反，真变假，假变真
	
	printf("b = %u.\r\n",b);
	printf("c = %u.\r\n",c);
	*/
	
	// 按位异或
	unsigned int a = 45;	// 0x2d 00101101
	unsigned int b = 23, c;	// 0x17 00010111
	
	c = a ^ b;		// 按位异或	00111010 58
	
	printf("c = %u.\r\n",c);
	
	return 0;
}