/*************************************************************************
	> File Name: 114.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 11时21分33秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

//判断是不是回文字符串，是返回1， 不是返回0
int palindrome(char *ch)
{
	int n = strlen(ch);
	char *left = ch;
	char *right = ch + n - 1;
	while (left < right)
	{
		if (*left != *right)
		{
			break;
		}
		left++;
		right--;
	}
	if (left < right)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}


int main()
{
	char ch[100] = {0};

	printf("Please input an string:\n");
	scanf("%s", ch);

	if (palindrome(ch) == 1)
	{
		printf("palindrome string\n");
	}
	else
	{
		printf("not palindrome string\n");
	}
	return 0;
}
