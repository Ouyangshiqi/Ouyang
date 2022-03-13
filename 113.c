/*************************************************************************
	> File Name: 113.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 10时39分04秒
 ************************************************************************/

#include<stdio.h>

void str_substitute(char *orig, char *subs, int pos)
{
	char *p = orig + pos;
	while (*p && *subs)
	{
		*p = *subs;
		p++;
		subs++;
	}
	if(*p == '\0')
	{
		while (*subs)
		{
			*p = *subs;
			p++;
			subs++;
		}
		*p = *subs;
	}
}

void str_scanf(char *str)
{
	while ((*str = getchar()) != '\n')
	{
		str++;
	}
	*str = '\0';
}


int main()
{
	char orig_str[100] = {0};
	char subs_str[100] = {0};
	int pos = 0;

	printf("please input original string:");
	str_scanf(orig_str);
	printf("\nPlease input substitute string:");
	str_scanf(subs_str);
	printf("\nPlease input substitute position:");
	scanf("%d", &pos);

	str_substitute(orig_str, subs_str, pos);

	printf("\n%s\n", orig_str);
	return 0;
}
