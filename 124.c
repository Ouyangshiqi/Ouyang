/*************************************************************************
	> File Name: 124.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 16时19分55秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//计算身高的平均值，返回值为float型的平均值
float stature_ave(int *stature, int n)
{
	int i = 0;
	float sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += stature[i];
	}

	return sum/n;
}

//设计函数计算学生平均身高
int main()
{
	int n = 0;
	int *stature = NULL;
	float ave = 0;
	int i = 0;

	printf("please input number of students:\n");
	scanf("%d", &n);

	stature = (int *)calloc(n, sizeof(int));
	if (stature == NULL)
	{
		perror("calloc stature");
		return 0;
	}

	printf("please input stature of students:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &stature[i]);
	}

	ave = stature_ave(stature, n);

	free(stature);
	stature = NULL;

	printf("The average stature of student is: %.2f\n", ave);

	return 0;
}
