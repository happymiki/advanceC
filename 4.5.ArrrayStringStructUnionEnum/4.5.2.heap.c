#include "stdio.h"
#include "stdlib.h"


int main (void)
{
	/* ��һ������Ҫ1000��int���͵����� */
	// int *p = (int *)malloc(1000*sizeof(int));
	
	/* �ڶ�������������Ƿ�ɹ� */
	// if (NULL == p)
	//{
	//	printf("malloc error.\n");
		
	//	return -1;
	//}
	
	/* ��������ʹ�����뵽���ڴ� */
	// p = NULL;
	// p = &a;		
	/* �����free֮ǰ��p���⸳ֵ����ômalloc������Ƕ��ڴ�Ͷ�ʧ���� 
	 malloc֮��p�ͷ��ص��ڴ���󶨣�p���Ƕ��ڴ��ڵ�ǰ���̵�Ψһ��ϵ��
	 ���pû��free֮ǰ�Ͷ��ˣ���ô����ڴ����Զ���˶��˵ĸ������
	 �ڲ���ϵͳ�Ķѹ�����������ڴ��ǵ�ǰ�������ŵģ�������Ҳ�ò���
	 �������������µ��ڴ����滻ʹ�á���ͽг��򡰳��ڴ桱��ѧ�����ڴ�й©*/
	
	
	//*(p+0) = 1; 
	//*(p+1) = 2;
	
	//printf("*(p+1)=%d\n",*(p+1));
	
	/* ���Ĳ����ͷ� */
	//free(p);
	// p = NULL;
	//*(p+21) = 22;
	
	//printf("*(p+21)=%d\n",*(p+21));
	
	/*
	int *p1 = (int *)malloc(0);
	int *p2 = (int *)malloc(0);		// p2-p1 = 16 Byte
	
	if (NULL == p1 )
	{
		printf("malloc error.\n");
		
		return -1;
	}
	
	printf("p = %p\n",p1);
	printf("p = %p\n",p2);
	*/
	
	/*
	int *p1 = (int *)malloc(4);
	int *p2 = (int *)malloc(4);		// p2-p1 = 16 Byte
	
	if (NULL == p1 )
	{
		printf("malloc error.\n");
		
		return -1;
	}
	
	printf("p = %p\n",p1);
	printf("p = %p\n",p2);
	*/
	
	int *p = (int *)malloc(20);
	   
	if (NULL == p )
	{
		printf("malloc error.\n");
		
		return -1;
	}

	*(p+3) = 12;
	*(p+3000) = 1234;
	
	printf("*(p+3) = %d\n",*(p+3));
	printf("*(p+3000) = %d\n",*(p+3000));
	
	return 0;
}



















