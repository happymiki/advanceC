#include "stdio.h"

int main(void)
{
	int *p1[5];			// ָ�����飬��һ�����飬ÿ��Ԫ�ش��ָ��int���͵�ָ�������
	int (*p2)[5];		// ����ָ�룬��һ��ָ�룬ָ��ָ��int���͵���5��Ԫ�ص�����.
	int *(p3[5]);		// ָ������
	
	
	int a[5]={0,1,2,3,4};
	int b = 5,c = 6;
	
	p1[0] = &b;
	p1[1] = &c;
	
	p2 = &a;
	
	printf("p1[0] = %p\n",p1[0]);
	printf("*p1[0] = %d\n",*p1[0]);
	printf("p1[1] = %p\n",p1[1]);
	printf("*p1[1] = %d\n",*p1[1]);
	
	printf("p2 = %p\n",p2);
	printf("*p2 = %d\n",*(p2+1));
	
	return 0;
}


















