#include "stdio.h"

int main(void)
{
	/*
	int *p;		// �ֲ�����������ջ���棬ֵ�������
	
	
	printf("p = %p.\n",p);
	
	
	*p = 4;		//Segmentation fault (core dumped)����ʱ�Ķδ���Ұָ����ɵ�
	*/
	
	int *p = NULL;
	int a = 0;
	
	// �м�ܶ����...........
	p = &a;			// ��ȷ��ʹ��ָ��ķ�ʽ���ǽ�����ǰ��һ�����Կ����õĵ�ַ��
	
	//if(p != NULL)
	if (NULL != p)
	{
		*p = 4;
	}
	p = NULL;		// ʹ����ָ������󣬼ǵý������¸�ֵΪNULL
	
	printf("a = %d\n", a);
	
	return 0;
}























