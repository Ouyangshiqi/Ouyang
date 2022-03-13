/*************************************************************************
	> File Name: 125.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 16时42分51秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//求一个数组中的最小值，并返回该最小值
int arr_min(int *arr, int n)
{
	int i = 0;
	int min = arr[0];

	for (i = 0; i < n; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}

	return min;
}

//求数组元素中的最小值
int main()
{
	int n = 0;
	int min = 0;
	int i = 0;
	int *arr = NULL;
	
	printf("please input the number of elements:\n");
	scanf("%d", &n);

	arr = (int *)calloc(n, sizeof(int));
	if (arr == NULL)
	{
		perror("calloc arr");
		return 0;
	}

	printf("please inpout the element:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	min = arr_min(arr, n);

	free(arr);
	arr = NULL;

	printf("the min number is : %d\n", min);

	return 0;
}
