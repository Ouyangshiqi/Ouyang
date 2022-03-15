/*************************************************************************
	> File Name: 172.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月15日 星期二 12时46分06秒
 ************************************************************************/

#include<stdio.h>


int * max_arr(int *arr, int n)
{
	int i = 0;
	int * max = NULL;
	
	max = &arr[0];
	for (i = 0; i < n; i++)
	{
		if (arr[i] > *max)
		{
			max = &arr[i];
		}
	}

	return max;
}

//使用返回指针的函数查找最大值
int main()
{
	int arr[10]  = {0};
	int *max = NULL;
	int i = 0;

	printf("Please input ten integer:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	max = max_arr(arr, 10);

	printf("The max number is : %d\n", *max);
	return 0;
}
