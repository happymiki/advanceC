#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ˫����Ľڵ�
struct node
{
	int data;				// ��Ч����
	struct node *pPrev;		// ǰ��ָ��
	struct node *pNext;		// ����ָ��
};

struct node *create_node(int data)
{
	struct node *p = (struct node *)malloc(sizeof(struct node));
	
	if (NULL == p)
	{
		printf("error.\r\n");
	}
	p -> data = data;
	p -> pPrev = NULL;
	p -> pNext = NULL;		// Ĭ��ǰ��ͺ����ָ��ָ��NULL
	
	return p;
}

int main(void)
{
	struct node *pHeader = create_node(0);		// ͷָ��
	
	
	
	return 0;
}


















