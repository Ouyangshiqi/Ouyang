/*************************************************************************
	> File Name: 179.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 09时59分31秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//冒泡排序函数
int * bubbing_sort(int *arr, int n)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

//使用指针实现冒泡排序
int main()
{
	int n = 0;
	int *arr = NULL;
	int i = 0;

	//输入数组的长度
	printf("Please input number of array:\n");
	scanf("%d", &n);

	//开辟相应长度的内存空间
	arr = (int *)calloc(n, sizeof(int));
	if (arr == NULL)
	{
		perror("calloc arr:");
		return 0;
	}

	//输入数组元素
	printf("Please input element of array:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	//调用冒泡排序函数
	bubbing_sort(arr, n);

	//打印排序好的数组
	printf("Sorted array:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	//释放动态开辟的内存空间，防止内存泄露
	free(arr);
	arr = NULL;

	return 0;
}
