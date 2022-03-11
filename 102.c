#include <stdio.h>
#include <stdlib.h>

//声明一个结构体，用于存放学生的信息
typedef struct student
{
	int NUM;//学号
	int C;	//语文成绩
	int M;	//数学成绩
	int E;	//英语成绩
	float A;//三科平均成绩
}student;


//统计学生成绩
int main()
{
	student * info = NULL;
	int n = 0;
	int i = 0;
	
	//输入学生的人数，然后动态开辟存放该人数信息所需要的内存空间
	printf("please input number of students\n");
	scanf("%d", &n);
	info = (student *)malloc(n*sizeof(student));

	//输入每个学生的信息
	printf("please input a StudentID and three scores:\n\tID\tChinese\t Math\tEnglish\n");
	for(i = 0; i < n; i++)
		{
			printf("N0.%d>", i+1);
			scanf("%d%d%d%d", &(info+i)->NUM, &(info+i)->C, &(info+i)->M, &(info+i)->E);
			(info+i)->A = ((info+i)->C+(info+i)->M+(info+i)->E)/3.0;
		}

	//打印每个学生的信息
	printf("StudentNum    Chinese    Math    English    Average\n");
	for(i = 0; i < n; i++)
		{
			printf("%5d%12d%10d%10d%11.2f\n",
				(info+i)->NUM, (info+i)->C, (info+i)->M, (info+i)->E, (info+i)->A);
		}

	//释放动态开辟的空间，并把不用的指针指向空指针
	free(info);
	info = NULL;
	
	return 0;
}
