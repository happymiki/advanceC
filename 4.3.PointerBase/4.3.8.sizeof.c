#include "stdio.h"
#include "string.h"

#define dpChar char *
typedef char * tpChar;		// typedef�������������ͣ��������������û��Զ�������
				
// ��ȫ��ͬ��fun1
void fun(int b[])
{
	printf("sizeof(b):%d.\n",sizeof(b));
}

void fun1(int *b)
{
	printf("sizeof(b):%d.\n",sizeof(b));
}

void fun2(int *b,int num)
{
	// b�������ָ�루�׵�ַ����num������Ĵ�С��
}

int main(void)
{
	/*
	char str[] = "hello";  
	
	printf("sizeof(str):%d.\n",sizeof(str));			// 6
	printf("sizeof(str[0]):%d.\n",sizeof(str[0]));		// 1
	printf("strlen(str):%d.\n",strlen(str));			// 5,������\0
	*/
	
	/*
	char str[] = "hello"; 
	char *p = str;     
	
	printf("sizeof(p):%d.\n",sizeof(p));				// 4,�൱��sizeof��char *��
	printf("sizeof(*p):%d.\n",sizeof(*p));				// 1,�൱��sizeof��char��
	printf("strlen(p):%d.\n",strlen(p));				// 5
	*/
	
	/*
	int n = 10;                                
	
	printf("sizeof(n):%d.\n",sizeof(n));
	printf("sizeof(int):%d.\n",sizeof(int));
	*/
	
	/*
	int b[100]; 

	printf("sizeof(b):%d.\n",sizeof(b));				// 100 * sizeof(int) = 400
	*/
	
	/*
	int a[20];
	
	fun(a);			// 4,��Ϊa�ں���func�ڲ�����ָ�룬���������顣
	fun1(a);
	
	fun2(a,sizeof(a));
	*/
	
	/*
	dpChar p1,  p2; 							// չ����char *p1��p2���൱��char *p1��char p2;
	tpChar p3,  p4;                      		// չ�����൱��char *p3��*p4
	
	printf("sizeof(p1):%d.\n",sizeof(p1));		// 4
	printf("sizeof(p2):%d.\n",sizeof(p2));		// 1
	
	printf("sizeof(p3):%d.\n",sizeof(p3));		// 4
	printf("sizeof(p4):%d.\n",sizeof(p4));		// 4
	*/
	
	/*
	int a[100];
	int b = sizeof(a)/sizeof(a[0]);		// ����������ֽ�������һ��Ԫ�ص��ֽ�����
										// �õ������������Ԫ�ظ���
	
	printf("b:%d.\n",b);
	*/
	
	return 0;
}


































