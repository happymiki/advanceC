#ifndef __CAL_H__
#define __CAL_H__

// ������һ������pFunc���������ָ������ָ��һ���ض������б�ͷ���ֵ�ĺ���
typedef int (*pFunc)(int,int);

// �ṹ�����������������ģ���Ҫ�����ԭ����
struct cal_t 
{
	int x;
	int y;
	int ret;
	
	pFunc p1;
	
};

// ����ԭ������
int calculator(const struct cal_t *p);



#endif



























