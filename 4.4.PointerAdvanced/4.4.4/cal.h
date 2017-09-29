#ifndef __CAL_H__
#define __CAL_H__

// 定义了一个类型pFunc，这个函数指针类型指向一种特定参数列表和返回值的函数
typedef int (*pFunc)(int,int);

// 结构体是用来做计算器的，需要计算的原材料
struct cal_t 
{
	int x;
	int y;
	int ret;
	
	pFunc p1;
	
};

// 函数原型声明
int calculator(const struct cal_t *p);



#endif



























