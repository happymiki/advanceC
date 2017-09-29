#include "stdio.h"

// ��һ�⣺�ú궨�彫32λ���ĵ�nλ��bit0Ϊ��һλ����λ
#define SET_BIT_N(x,n) ((x) | (1U<<((n)-1)))

// ��һ�⣺�ú궨�彫32λ���ĵ�nλ��bit0Ϊ��һλ������
#define CLEAR_BIT_N(x,n) ((x) & (~(1U<<((n)-1))))

// �����⣺�ú궨�彫32λ���ĵ�nλ����mλ��bit0Ϊ��һλ����λ
#define SET_BIT_N_M(x,n,m) ((x) | ((~(0U)>>(32-((m)-(n)+1))) << ((n)-1)))

// �����⣺��ȡ����������λ
#define GETBITS(x,n,m) ((x & ~(~(0U)<<(m-n+1))<<(n-1))     >>     (n-1))

int main(void)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int c = 0;
	unsigned int d = 0;
	
	b = SET_BIT_N(a,4);
	printf("b = 0x%x.\n",b);
	
	a = 0xffffffff;
	c = CLEAR_BIT_N(a,4);
	printf("c = 0x%x.\n",c);
	
	a = 0;
	d = SET_BIT_N_M(a,5,8);
	printf("d = 0x%x.\n",d);
	
	
	
	return 0;
}













