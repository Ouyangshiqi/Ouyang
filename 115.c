/*************************************************************************
	> File Name: 115.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 11时37分05秒
 ************************************************************************/

#include<stdio.h>

//菜单
void menu()
{
	printf("输入1 加密新的明文， 输入2 对刚加密的明文进行解密， 输入3 退出系统\n");
}

//字符串加密函数
void encryption_str(char *ch)
{
	int i = 0;
	while (ch[i])
	{
		ch[i] = ch[i] + i + 5;
		i++;
	}
}

//字符串解密函数
void decode_str(char *ch)
{
	int i = 0;
	while (ch[i])
	{
		ch[i] = ch[i] - i - 5;
		i++;
	}
}

int main()
{
	int input = 0;
	char ch[100] = {0};

	while(1)
	{
		menu();
		printf("请输入命令符:>");
		scanf("%d", &input);
		if (input == 1)
		{
			printf("请输入要加密的明文:\n");
			scanf("%s", ch);
			encryption_str(ch);
			printf("加密成功，加密后的明文是：%s\n", ch);
		}
		else if (input == 2)
		{
			decode_str(ch);
			printf("解密成功，解密后的明文是：%s\n", ch);
		}
		else if (input == 3)
		{
			printf("已退出系统\n");
			break;
		}
		else
		{
			printf("命令错误\n");
		}
	}
}
