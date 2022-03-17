/*************************************************************************
	> File Name: 241.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月17日 星期四 19时53分59秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

//以行为单位读写文件
int main()
{
	char *ch = "同一个世界，同一个梦想！";
	FILE *fp = NULL;
	char fname[20] = {0};
	char cha[100] = {0};

	//输入要打开的文件名
	printf("Please input filename:\n");
	scanf("%s", fname);

	//以读写的方式打开文件
	fp = fopen(fname, "w+");
	if (fp == NULL)
	{
		perror("open file w+");
		return 0;
	}

	//写入文件
	fputs(ch, fp);

	//将文件指针重新设置到该文件的起点
	rewind(fp);

	//读取文件
	fgets(cha, strlen(ch)+1, fp);
	printf("%s\n", cha);

	//关闭文件
	fclose(fp);
	fp = NULL;

	return 0;
}
