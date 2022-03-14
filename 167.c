/*************************************************************************
	> File Name: 167.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月14日 星期一 21时35分29秒
 ************************************************************************/

#include<stdio.h>

typedef struct info
{
	int num;		//学生学号
	char name[20];		//学生姓名
	char sex[10];		//学生性别
	int age;			//学生年龄
	float score;	//学生成绩
}info;

int main()
{
	info stu = {1001, "李XX", "M", 25, 90.3};
	info *p = &stu;
	
	printf("Number: %d\n", p->num);
	printf("Name: %s\n", p->name);
	printf("Sex: %s\n", p->sex);
	printf("Age: %d\n", p->age);
	printf("Score: %.1f\n", p->score);

	return 0;
}
