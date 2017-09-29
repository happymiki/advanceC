#include <linux/list.h>

struct device_info
{
	int data;
};

// 用来管理内核中的驱动
struct device
{
	char name[20];		// 驱动名称
	int id;				// 驱动id编号
	struct device_info info;	// 驱动信息
	struct list_head head; 		// 内嵌的内核链表成员
};

// 分析device可知，前三个都是数据区成员，第四个是struct list_head类型的变量，这就是一个纯链表
//本来device结构体没有链表，也无法用链表来管理，device通过struct_list_head内嵌链表实现链表功能。

int main(void)
{
	

	
	return 0;
}





















