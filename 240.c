/*************************************************************************
	> File Name: 240.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月17日 星期四 19时14分29秒
 ************************************************************************/

#include<stdio.h>

typedef struct stu
{
	char Name[20];
	int Num;
	int Age;
}stu;

void save_info(char *fname, int n)
{
	stu info;
	int i = 0;
	FILE *fp = NULL;

	fp = fopen(fname, "w");
	if (fp == NULL)
	{
		perror("open file w");
		return ;
	}	

	printf("Please input name, number, age\n");
	for (i = 0; i < n; i++)
	{
		printf("NO%d : ", i+1);
		scanf("%s%d%d", info.Name, &info.Num, &info.Age);
		if (fwrite(&info, sizeof(stu), 1, fp) != 1)
		{
			perror("fwrite file");
			return ;
		}
	}

	fclose(fp);
	fp = NULL;
}

void show_info(char *fname, int n)
{
	stu info;
	FILE *fp = NULL;

	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		perror("open file r");
		return ;
	}

	while (fread(&info, sizeof(stu), 1, fp) == 1)
	{
		printf("%-10s%-8d%d\n", info.Name, info.Num, info.Age);
		fseek(fp, sizeof(stu), SEEK_CUR);
	}

	fclose(fp);
	fp = NULL;
}


//随机读写文件
int main()
{
	char fname[10] = {0};
	int n = 0;

	printf("Please input filename:\n");
	scanf("%s", fname);

	printf("Please input the number of students:\n");
	scanf("%d", &n);

	//保存信息到文件
	save_info(fname, n);

	//从文件中读取信息
	show_info(fname, n);

	return 0;
}
