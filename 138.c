/*************************************************************************
	> File Name: 138.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月14日 星期一 13时01分15秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[90];
	char str2[90];
	char str3[90];
	char str4[90];
	char *p;
	int n = 0;

	printf("please input string1: ");
	scanf("%s", str1);
	printf("please input string2: ");
	scanf("%s", str2);

	//求在str1字符串中寻找第一个不属于str2字符串中的字符的位置
	n = strspn(str1, str2);
	printf("the position you want to find is: %d\n", n);

	printf("please input string3: ");
	scanf("%s", str3);
	printf("please input string4: ");
	scanf("%s", str4);

	//判断str4是不str3的子字符串，是返回str3中的子串的首地址， 不是返回空指针
	p = strstr(str3, str4);
	if (p == NULL)
	{
		printf("can not find str4 in str3！\n");
	}
	else
	{
		printf("str3 include str4 : %s\n", p);
	}

	return 0;
}
