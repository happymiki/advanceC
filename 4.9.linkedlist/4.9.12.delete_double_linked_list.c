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

void insert_tail(struct node *pH,struct node *new)
{
	struct node *p = pH;
	// 先走到链表的末尾
	while (NULL != p->pNext)
	{
		p = p->pNext;		// 第一次循环走过了头节点
	}
	
	// 循环结束后p就指向了原来的最后一个节点
	// 插入到尾节点末尾
	p -> pNext = new;		// 后向指针关联好了
	new -> pPrev = p;		// 前向指针关联好了
							// 前节点的prev和后节点next未变动
	
}

// 将新节点new前插入链表pH中。
// 算法参照图示进行连接，一共有4个指针需要赋值。注意的是顺序。
void insert_head(struct node *pH, struct node *new)
{
	// 新节点的next指针指向原来的第1个有效节点的地址
	new->pNext = pH->pNext;
	
	// 原来第1个有效节点的prev指针指向新节点的地址
	if (NULL != pH->pNext)
		pH->pNext->pPrev = new;
	 
	// 头节点的next指针指向新节点地址
	pH->pNext = new;
	
	// 新节点的prev指针指向头节点的地址
	new->pPrev = pH;
}


void traversal(struct node *pH)
{
	struct node *p = pH;
	printf("start!.\n");
	//pH->data;		// 头节点的数据，不是常规数据，不要算进去
	
	while (NULL != p->pNext)		// 是不是最后一个节点
	{
		p = p->pNext;		// 循环的增量
		printf("node data:%d.\n",p->data);
	}
	printf("end!.\n");
}

// 前向遍历一个双遍历，参数pTail要指向链表末尾
void forward_traversal(struct node *pTail)
{
	struct node *p = pTail;
	
	while (NULL != p->pPrev)
	{
		printf("data = %d.\n", p->data);
		
		p = p->pPrev;
	}
}

// 从链表pH中删除一个节点，节点中的数据是data
int delete_node(struct node *pH, int data)
{
	struct node *p = pH;
	
	if (NULL == p)
	{
		return -1;
	}
	
	while (NULL != p->pNext)
	{
		p = p->pNext;
		
		// 在这里先判断当前节点是不是我们要删除的那个节点
		if (p->data == data)
		{
			// 找到了，删除之。当前上下文是：当前节点为p
			if (NULL == p->pNext)
			{
				// 尾节点
// p表示当前节点地址，p->pNext表示后一个节点地址，p->pPrev表示前一个节点的地址
				p->pPrev->pNext = NULL;
				//p->pPrev = NULL;			可以省略，因为后面整个都被销毁了
				// 销毁p节点
				//free(p);
			}
			else
			{
				// 不是尾节点，普通节点
				
				// 前一个节点的next指针指向后一个节点的首地址
				p->pPrev->pNext = p->pNext;
				
				// 当前节点的prev和next指针都不用管，因为后面会整体销毁整个节点
				
				// 后一个节点的prev指针指向前一个节点的首地址
				p->pNext->pPrev = p->pPrev;
				
				//free(p);
			}
			free(p);
			
			return 0;
		}
	}
	
	printf("未找到目标节点.\n");
	return -1;
}


int main(void)
{
	struct node *pHeader = create_node(0);		// 头指针
	
	insert_head(pHeader,create_node(11));
	insert_head(pHeader,create_node(12));
	insert_head(pHeader,create_node(13));
	insert_head(pHeader,create_node(14));
	
	traversal(pHeader);
	
	delete_node(pHeader,12);
	
	traversal(pHeader);
	
	return 0;
}


















