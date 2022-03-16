/*************************************************************************
	> File Name: 187.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 12时36分08秒
 ************************************************************************/

#include<stdio.h>

//判断son字符串是不是father的子字符串，是返回son字符串在father字符串中的开始位置的指针，不是返回空指针
char * my_strstr(const char *father, const char *son)
{
	const char *save = father;
	const char *p = son;
	const char *q = save;

	while(*save)
	{
		if (*save == *p)
		{
			q = save;
			while (*p && *q)
			{
				if (*p != *q)
				{
					break;
				}
				p++;
				q++;
			}

			if (*p == '\0')
			{
				return (char *)save;
			}

			if (*q == '\0')
			{
				return NULL;
			}
		}
		save++;
	}
}

//模拟实现strstr函数
int main()
{
	char *str1 = "abcdefg";
	char *str2 = "cde";
	char *p = NULL;

	p = my_strstr(str1, str2);

	//打印结果
	if (p == NULL)
	{
		printf("not find\n");
	}
	else
	{
		printf("Matchable!\n%s\n", p);
	}
	return 0;
}
