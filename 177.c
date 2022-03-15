/*************************************************************************
	> File Name: 177.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月15日 星期二 15时21分42秒
 ************************************************************************/

#include<stdio.h>

//打印数组元素的函数
void print(int *arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//寻找相同元素的函数
int * search_same(int *arr1, int n, int *arr2, int m)
{
	int i = 0;
	int j = 0;
	int *p = arr1;
	int *q = arr2;

	while (*p && *q)
	{
		if (*p == *q)
		{
			return p;
		}
		if (*p > *q)
		{
			q++;
		}
		else
		{
			p++;
		}
	}
	return NULL;
}

//寻找相同元素的指针
int main()
{
	int arr1[] = {1, 3, 5, 7, 9, 11, 13, 15};
	int arr2[] = {2, 4, 6, 8, 11, 15, 17};
	int *num = NULL;

	printf("The elements of array a:\n");
	//调用输出数组函数输出数组
	print(arr1, sizeof(arr1)/sizeof(arr1[0]));
	printf("The elements of array b:\n");
	print(arr2, sizeof(arr2)/sizeof(arr2[0]));

	//调用寻找相同元素的函数
	num = search_same(arr1, 8, arr2, 7);

	//打印是否找到的信息
	if (num)
	{
		printf("The first element in both arrays is %d\n", *num);
	}
	else
	{
		printf("Doesn't found the same element!\n");
	}
	return 0;
}
