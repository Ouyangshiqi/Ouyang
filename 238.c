/*************************************************************************
	> File Name: 238.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月17日 星期四 14时41分03秒
 ************************************************************************/

#include<stdio.h>

//创建临时文件
int main()
{
	char ch = 0;

	//创建一个临时文件
	FILE *p = tmpfile();
	if (p == NULL)
	{
		perror("tmpfile");
		return 0;
	}

	//写一个字符串到临时文件
	fprintf(p, "Hello world Hello mingri");
	
	//将文件指针重新设置到该文件的起点
	rewind(p);

	//到临时文件在读出字符
	while(fscanf(p, "%c", &ch) != EOF)
	{
		printf("%c", ch);
	}
	printf("\n");

	//关闭临时文件
	fclose(p);
	p = NULL;

	return 0;
}
