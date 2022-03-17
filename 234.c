/*************************************************************************
	> File Name: 234.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月17日 星期四 10时38分13秒
 ************************************************************************/

#include<stdio.h>

//关闭所有打开的文件
int main()
{
	FILE *fp1, *fp2, *fp3;
	char t = 0;
	int n = 0;

	//打开a.txt文件，并读取打印到屏幕上
	fp1 = fopen("a.txt", "r");
	if (fp1 == NULL)
	{
		perror("open a,txt");
		return 0;
	}
	printf("File1:\n");
	while ((t = fgetc(fp1)) != EOF)
	{
		printf("%c", t);
	}
	printf("\n");


	//打开b.txt文件，并读取打印到屏幕上
	fp2 = fopen("b.txt", "r");
	if (fp2 == NULL)
	{
		perror("open b,txt");
		return 0;
	}
	printf("File2:\n");
	while ((t = fgetc(fp2)) != EOF)
	{
		printf("%c", t);
	}
	printf("\n");


	//打开c.txt文件，并读取打印到屏幕上
	fp3 = fopen("c.txt", "r");
	if (fp3 == NULL)
	{
		perror("open c,txt");
		return 0;
	}
	printf("File3:\n");
	while ((t = fgetc(fp3)) != EOF)
	{
		printf("%c", t);
	}
	printf("\n");

	//关闭所有已打开的文件，并打印所关闭的文件的数量
	n = fcloseall();
	printf("%d Files closed\n", n);
	return 0;
}
