#include <stdio.h>


// 定义状态集
typedef enum
{
	STATE1,
	STATE2,
	STATE3,
	STATE4,
	STATE5,
	STATE6,
	STATE7,
}STATE;

int main(void)
{
	int passwd = 0;
	STATE current_state = STATE1;	// 状态机的初始状态为状态1
	
	
	// 1.实现用户循环输入密码
	printf("请输入密码：");
	
	while (1)
	{
		scanf("%d",&passwd);
		printf("passwd = %d.\r\n",passwd);
		
		
		// 在这里处理用户的本次输入
		switch (current_state)
		{
			case STATE1:
				if (passwd == 1)
				{
					current_state = STATE2;		// 用户输入正确，STATE走一步
				}
				else
				{
					current_state = STATE1;
				}
				break;

			case STATE2:
				if (passwd == 2)
				{
					current_state = STATE3;		// 用户输入正确，STATE走一步
				}
				else
				{
					current_state = STATE1;
				}
				break;
				
			case STATE3:
				if (passwd == 3)
				{
					current_state = STATE4;		// 用户输入正确，STATE走一步
				}
				else
				{
					current_state = STATE1;
				}
				break;
			case STATE4:
				if (passwd == 4)
				{
					current_state = STATE5;		// 用户输入正确，STATE走一步
				}
				else
				{
					current_state = STATE1;
				}
				break;
			case STATE5:
				if (passwd == 5)
				{
					current_state = STATE6;		// 用户输入正确，STATE走一步
				}
				else
				{
					current_state = STATE1;
				}
				break;
			case STATE6:
				if (passwd == 6)
				{
					current_state = STATE7;		// 用户输入正确，STATE走一步
				}
				else
				{
					current_state = STATE1;
				}
				break;
			default:
				current_state = STATE1 ;
		}
		if (current_state == STATE7)
		{
			printf("锁开了。\n");
			break;
		}
	}
	return 0;
}





















