#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 构建一个链表节点

struct node
{
	int data;				// 有效数据
	struct node *pNext;		// 指向下一个节点的指针
};

// 创建一个链表的节点
// 返回值：指针，指向本函数新创建的节点的首地址
struct node * creat_node(int data)
{
	// 创建一个链表的节点
	struct node *p = (struct node *)malloc(sizeof(struct node));
	
	if (NULL == p)
	{
		printf("malloc error.\n");
		return NULL;
	}
	
	// 清理申请到的堆内存
	bzero(p,sizeof(struct node));
	
	// 填充节点
	p -> data = data;
	p -> pNext = NULL;		// 将来要指向下一个节点的首地址
	
	return p;
}
// 思路：头指针向后走，知道走到原来最后一个节点，原来最后一个节点里面的pNext是NULL,现在只需要改成new，添加之后新节点变成最后一个。

void insert_tail(struct node *pH,struct node *new)
{
	// 分两步插入
	// 先找到链表中最后一个节点
	struct node *p = pH;
	
	while (NULL != p->pNext)
	{
		p = p->pNext;		// 未找到，往后走一个节点
	}
		
	// 将新节点插入到最后一个节点尾部
	p->pNext = new;
}


int main(void)
{
	//struct node *pHeader = NULL;
	struct node *pHeader = creat_node(0);
    /*
	// 关联起来
	pHeader = creat_node(1);
	pHeader->pNext = creat_node(2);
	pHeader->pNext->pNext = creat_node(3);
	*/
	insert_tail(pHeader,creat_node(1));
	insert_tail(pHeader,creat_node(2));
	insert_tail(pHeader,creat_node(3));
	
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



























