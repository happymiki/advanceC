#include <linux/list.h>

struct device_info
{
	int data;
};

// ���������ں��е�����
struct device
{
	char name[20];		// ��������
	int id;				// ����id���
	struct device_info info;	// ������Ϣ
	struct list_head head; 		// ��Ƕ���ں������Ա
};

// ����device��֪��ǰ����������������Ա�����ĸ���struct list_head���͵ı����������һ��������
//����device�ṹ��û������Ҳ�޷�������������deviceͨ��struct_list_head��Ƕ����ʵ�������ܡ�

int main(void)
{
	

	
	return 0;
}





















