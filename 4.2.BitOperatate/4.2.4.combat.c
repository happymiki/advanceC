#include "stdio.h"

int main(void)
{
	/*
	unsigned int a = 0;
	
	a |= (0x1f<<3);		// bit3~bit7置1
	
	printf("a = 0x%x.\n",a);
	*/

	/*
	unsigned int a = 0xffffffff;
	
	a &= (~(1<<15));
	
	printf("a = 0x%x.\n",a);
	*/
	
	/*
	unsigned int a = 0xffffffff;
	
	a &= (~(0x1ff<<15));
	
	printf("a = 0x%x.\n",a);
	*/
	
	/*
	unsigned int a = 0x444a34f8;
	
	a &= (0x3f<<3);
	a >>= 3;
	
	printf("a = 0x%x.\n",a);	
	*/
	
	/*
	unsigned int a = 0xc30288f8;
	
	// 第一步：bit7～bit17清零
	a &= (~(0x7ff<<7));
	// 第二部：bit7～bit17赋值937
	a |= (937<<7);
	
	printf("a = 0x%x.\n",a);
	*/
	
	/*
	unsigned int a = 0xc30288f8;
	unsigned int tmp = 0;
	
	// 第一步：将bit7～bit17以外的清零
	tmp &= (~(0x7ff<<7));
	// 第二步：右移bit7～bit17
	tmp >>= 7;
	// 第三步：给这个值加17
	tmp += 17;
	// 第四步：将a的bit7～bit17清零
	a &= (~(0x7ff<<7));
	// 第五步：将值写入bit7～bit17
	a |= (tmp<<7);
	
	printf("a = 0x%x.\n",a);
	*/
	
	unsigned int a = 0xc30288f8;
	/*
	// 第一步：bit7～bit17清零
	a &= (~(0x7ff<<7));
	// 第二步：bit7～bit17赋值937
	a |= (937<<7);
	
	// 第三步：bit21～bit25清零
	a &= (~(0x1f<<21));
	// 第四步：bit21～bit25赋值17
	a |= (17<<21);
	*/
	
	// 第一步：bit7～bit17和bit31～bit25全部清零
	a &= ~((0x7ff<<7) | (0x1f<<21));
	// 第二步：937和17全部赋值
	a |= ((937<<7) | (17<<21));
	return 0;
}




















