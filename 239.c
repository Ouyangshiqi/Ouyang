/*************************************************************************
	> File Name: 239.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月17日 星期四 14时58分38秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct stu
{
	char name[20];
	int Num;
	float score[3];
};

//成块读写操作
int main()
{
	int n = 0;
	char fname[20] = {0};
	FILE *p = NULL;
	struct stu *info = NULL;
	struct stu infor;

	//输入学生的总人数
	printf("Now many students in your class?\n");
	scanf("%d", &n);

	//输入要打开的文件名
	printf("Please inpuot filename:\n");
	scanf("%s", fname);

	//打开文件
	p = fopen(fname, "w+");
	if (p == NULL)
	{
		perror("open file w+");
		return 0;
	}

	//动态开辟所需要的内存空间
	info = (struct stu *)calloc(3, sizeof(struct stu));
	if (info == NULL)
	{
		perror("calloc");
		return 0;
	}

	//输入学生的信息
	printf("Please inout name, number, China, math, English:\n");
	for (int i = 0; i < n; i++)
	{
		printf("NO%d\n", i+1);
		scanf("%s%d", (info+i)->name, &(info+i)->Num);
		
		for (int j = 0; j < 3; j++)
		{
			scanf("%f", (info+i)->score + j);
		}
	}

	//将学生信息写入文件中
	fwrite(info, sizeof(struct stu), n, p);

	//释放动态开辟的空间
	free(info);
	info = NULL;

	//将文件指针重新设置到该文件的起点
	rewind(p);

	//从文件中把学生的信息读取出来打印到屏幕上
	while (fread(&infor, sizeof(struct stu), 1, p) > 0)
	{
		printf("%-10s%-8d%-6.f%-6.f%-6.f\n",
			   	infor.name,
			   	infor.Num,
			   	infor.score[0],
			   	infor.score[1],
			   	infor.score[2]);
	}

	//关闭文件
	fclose(p);
	p = NULL;

	return 0;
}
