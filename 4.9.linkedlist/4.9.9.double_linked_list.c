#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 双链表的节点
struct node
{
	int data;				// 有效数据
	struct node *pPrev;		// 前向指针
	struct node *pNext;		// 后向指针
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
	p -> pNext = NULL;		// 默认前向和后向的指针指向NULL
	
	return p;
}

int main(void)
{
	struct node *pHeader = create_node(0);		// 头指针
	
	
	
	return 0;
}


















