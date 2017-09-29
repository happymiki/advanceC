#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 构建一个链表节点

struct node
{
	int data;				// 有效数据
	struct node *pNext;		// 指向下一个节点的指针
};

int main(void)
{
	struct node *pHeader = NULL;
	
	/*****************************************************************************/
	// 每创建一个节点将他和前一个节点关联起来
	// 创建一个链表的节点
	struct node *p1 = (struct node *)malloc(sizeof(struct node));
	
	if (NULL == p1)
	{
		printf("malloc error.\n");
		return -1;
	}
	
	// 清理申请到的堆内存
	bzero(p1,sizeof(struct node));
	
	// 填充节点
	p1 -> data = 1;
	p1 -> pNext = NULL;		// 将来要指向下一个节点的首地址
	
	// 关联起来
	pHeader = p1;
	/*****************************************************************************/
	
	/*****************************************************************************/
	// 每创建一个节点将他和前一个节点关联起来
	// 创建一个链表的节点
	struct node *p2 = (struct node *)malloc(sizeof(struct node));
	
	if (NULL == p2)
	{
		printf("malloc error.\n");
		return -1;
	}
	
	// 清理申请到的堆内存
	bzero(p2,sizeof(struct node));
	
	// 填充节点
	p2 -> data = 2;
	p2 -> pNext = NULL;		// 将来要指向下一个节点的首地址
	
	// 关联起来
	p1->pNext = p2;
	/*****************************************************************************/

	/*******************************************************/
	// 每创建一个节点将他和前一个节点关联起来
	// 创建一个链表的节点
	struct node *p3 = (struct node *)malloc(sizeof(struct node));
	
	if (NULL == p3)
	{
		printf("malloc error.\n");
		return -1;
	}
	
	// 清理申请到的堆内存
	bzero(p3,sizeof(struct node));
	
	// 填充节点
	p3 -> data = 3;
	p3 -> pNext = NULL;		// 将来要指向下一个节点的首地址
	
	// 关联起来
	p2->pNext = p3;
	/*****************************************************************************/
	
	// 创建了一个头指针，3个节点的链表
	
	// 4.9.3节的代码
	// 访问链表各个节点的有效数据，这个访问只能用pHeader
	
	// 访问链表的第一个节点的有效数据
	printf("节点1的数据：%d.\n",pHeader -> data);
	
	// 访问链表的第二个节点的有效数据
	printf("节点2的数据：%d.\n",pHeader -> pNext -> data);
	
	// 访问链表的第三个节点的有效数据
	printf("节点3的数据：%d.\n",pHeader -> pNext -> pNext -> data);
	
	return 0;
}



























