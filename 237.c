/*************************************************************************
	> File Name: 237.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月17日 星期四 13时24分48秒
 ************************************************************************/

#include<stdio.h>

//格式化读写文件
int main()
{
	FILE *p = NULL;
	char ch[20] = {0};
	char fname[20] = {0};
	char c = 0;
	int i = 0;

	printf("Please input filename:\n");
	scanf("%s", fname);

	//以写的方式打开文件
	p = fopen(fname, "w");
	if (p == NULL)
	{
		perror("open file w");
		return 0;
	}

	printf("Please input string:\n");
	scanf("%s", ch);

	//格式化写入一个字符串到文件
	fprintf(p, "%s", ch);

	//关闭文件
	fclose(p);
	p = NULL;

	printf("read:\n");

	//以读的方式打开文件
	p = fopen(fname, "r");
	if (p == NULL)
	{
		perror("open file r");
		return 0;
	}

	//格式化从文件中读出字符
	while (fscanf(p, "%c", &c)!= EOF)
	{
		if (c >='a' && c <='z')
		{
			printf("%c", c-32);
		}
		else
		{
			printf("%c", c);
		}
	}
	printf("\n");

	//关闭文件
	fclose(p);
	p = NULL;

	return 0;
}
