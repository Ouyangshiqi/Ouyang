/*************************************************************************
	> File Name: 229.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 21时04分26秒
 ************************************************************************/

#include<stdio.h>

#define SWAP(a, b) {int t; t = a; a = b; b = t;}
#define N 10

//输入一个数组
void my_scanf(int *arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr+i);
	}
}

//打印一个数组
void print(int *arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//交换两个数组的元素
void swap_array(int *arr1, int *arr2, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		SWAP(arr1[i], arr2[i]);
	}
}

//使用宏定义实现数组值的互换
int main()
{
	int arr1[N] = {0};
	int arr2[N] = {0};

	//输入arr1数组
	printf("Please input a array:\n");
	my_scanf(arr1, N);

	//输入arr2数组
	printf("Please input a array:\n");
	my_scanf(arr2, N);

	//打印交换前的arr1数组
	printf("array a is:\n");
	print(arr1, N);

	//打印交换后的arr2数组
	printf("array b is:\n");
	print(arr2, N);

	//交换两个数组的元素
	swap_array(arr1, arr2, N);

	//打印交换后的arr1数组
	printf("now array a is :\n");
	print(arr1, N);

	//打印交换后的arr2数组
	printf("now array b is :\n");
	print(arr2, N);

	return 0;
}
