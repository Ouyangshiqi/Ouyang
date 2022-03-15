/*************************************************************************
	> File Name: 178.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月15日 星期二 20时34分07秒
 ************************************************************************/

#include<stdio.h>

//查找函数
int search(float (*score)[4])
{
	int i = 0;
	int j = 0;

	//遍历所有学生的成绩
	for (i = 0; i < 4; i++)//所有的学生
	{
		for (j = 0; j < 4; j++)//每个学生的成绩
		{
			if (score[i][j] < 60)//当有一科成绩不及格，返回该学生的学号
			{
				return i;
			}
		}
	}

	return -1;	//所有的同学的全部科目都及格，返回-1
}

//查找成绩不及格的学生
int main()
{
	float score[4][4] = {{60, 75, 82, 91}, {75, 81, 91, 90}, {51, 65, 78, 84}, {65, 72, 78, 72}};
	int No = 0;
	int i = 0;
	
	//查找函数
	No = search(score);

	//输出查找的结果
	if (No >= 0)
	{
		printf("The student NO.%d list : ", No+1);
		for (i = 0; i < 4; i++)
		{
			printf("%.1f ", score[No][i]);
		}
		printf("\n");
	}
	else
	{
		printf("All pass!\n");
	}

	return 0;
}
