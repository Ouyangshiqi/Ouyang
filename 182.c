/*************************************************************************
	> File Name: 182.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 10时50分50秒
 ************************************************************************/

#include<stdio.h>

#define N 5
#define M 5

//输入数组的函数
void my_scanf(int *arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

//打印数组的函数
void print(int *arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//找最大值的函数， 返回最大值所在的地址
int * find_max(int *arr, int n)
{
	int *max = arr;
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (arr[i] > *max)
		{
			max = &arr[i];
		}
	}

	return max;
}


//使用指针交换两个数组中的最大值
int main()
{
	int arr1[N] = {0};
	int arr2[M] = {0};
	int *max1 = 0;
	int *max2 = 0;
	int temp = 0;

	//输入两个数组的元素
	printf("input array a with %d element\n", N);
	my_scanf(arr1, N);
	printf("input array b with %d element\n", M);
	my_scanf(arr2, M);

	//调用函数，返回最大值的地址
	max1 = find_max(arr1, N);
	max2 = find_max(arr2, M);

	printf("The max numbers are %d and %d\n", *max1, *max2);

	//交换两个最大值
	temp = *max1;
	*max1 = *max2;
	*max2 = temp;

	//打印交换最大值后的数组
	printf("now a: ");
	print(arr1, N);
	printf("now b: ");
	print(arr2, M);

	return 0;
}
