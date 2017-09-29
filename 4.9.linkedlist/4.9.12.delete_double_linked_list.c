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

void insert_tail(struct node *pH,struct node *new)
{
	struct node *p = pH;
	// ���ߵ������ĩβ
	while (NULL != p->pNext)
	{
		p = p->pNext;		// ��һ��ѭ���߹���ͷ�ڵ�
	}
	
	// ѭ��������p��ָ����ԭ�������һ���ڵ�
	// ���뵽β�ڵ�ĩβ
	p -> pNext = new;		// ����ָ���������
	new -> pPrev = p;		// ǰ��ָ���������
							// ǰ�ڵ��prev�ͺ�ڵ�nextδ�䶯
	
}

// ���½ڵ�newǰ��������pH�С�
// �㷨����ͼʾ�������ӣ�һ����4��ָ����Ҫ��ֵ��ע�����˳��
void insert_head(struct node *pH, struct node *new)
{
	// �½ڵ��nextָ��ָ��ԭ���ĵ�1����Ч�ڵ�ĵ�ַ
	new->pNext = pH->pNext;
	
	// ԭ����1����Ч�ڵ��prevָ��ָ���½ڵ�ĵ�ַ
	if (NULL != pH->pNext)
		pH->pNext->pPrev = new;
	 
	// ͷ�ڵ��nextָ��ָ���½ڵ��ַ
	pH->pNext = new;
	
	// �½ڵ��prevָ��ָ��ͷ�ڵ�ĵ�ַ
	new->pPrev = pH;
}


void traversal(struct node *pH)
{
	struct node *p = pH;
	printf("start!.\n");
	//pH->data;		// ͷ�ڵ�����ݣ����ǳ������ݣ���Ҫ���ȥ
	
	while (NULL != p->pNext)		// �ǲ������һ���ڵ�
	{
		p = p->pNext;		// ѭ��������
		printf("node data:%d.\n",p->data);
	}
	printf("end!.\n");
}

// ǰ�����һ��˫����������pTailҪָ������ĩβ
void forward_traversal(struct node *pTail)
{
	struct node *p = pTail;
	
	while (NULL != p->pPrev)
	{
		printf("data = %d.\n", p->data);
		
		p = p->pPrev;
	}
}

// ������pH��ɾ��һ���ڵ㣬�ڵ��е�������data
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
		
		// ���������жϵ�ǰ�ڵ��ǲ�������Ҫɾ�����Ǹ��ڵ�
		if (p->data == data)
		{
			// �ҵ��ˣ�ɾ��֮����ǰ�������ǣ���ǰ�ڵ�Ϊp
			if (NULL == p->pNext)
			{
				// β�ڵ�
// p��ʾ��ǰ�ڵ��ַ��p->pNext��ʾ��һ���ڵ��ַ��p->pPrev��ʾǰһ���ڵ�ĵ�ַ
				p->pPrev->pNext = NULL;
				//p->pPrev = NULL;			����ʡ�ԣ���Ϊ������������������
				// ����p�ڵ�
				//free(p);
			}
			else
			{
				// ����β�ڵ㣬��ͨ�ڵ�
				
				// ǰһ���ڵ��nextָ��ָ���һ���ڵ���׵�ַ
				p->pPrev->pNext = p->pNext;
				
				// ��ǰ�ڵ��prev��nextָ�붼���ùܣ���Ϊ������������������ڵ�
				
				// ��һ���ڵ��prevָ��ָ��ǰһ���ڵ���׵�ַ
				p->pNext->pPrev = p->pPrev;
				
				//free(p);
			}
			free(p);
			
			return 0;
		}
	}
	
	printf("δ�ҵ�Ŀ��ڵ�.\n");
	return -1;
}


int main(void)
{
	struct node *pHeader = create_node(0);		// ͷָ��
	
	insert_head(pHeader,create_node(11));
	insert_head(pHeader,create_node(12));
	insert_head(pHeader,create_node(13));
	insert_head(pHeader,create_node(14));
	
	traversal(pHeader);
	
	delete_node(pHeader,12);
	
	traversal(pHeader);
	
	return 0;
}


















