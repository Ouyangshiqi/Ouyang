/*************************************************************************
	> File Name: 142.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月14日 星期一 18时13分15秒
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch = 0;

	while (1)
	{
		printf("input the character('q' to quit): ");
		ch = getchar();
		while (getchar() != '\n');
		
		if (ch == 'q' || ch == 'Q')
		{
			break;
		}

		//判断一个字符是否为字母，是返回非0， 不是返回0
		if (isalpha(ch))
		{
			printf("%c is a letter.\n", ch);
		}
		else
		{
			printf("%c is not a letter.\n", ch);
		}
	}

	return 0;
}
