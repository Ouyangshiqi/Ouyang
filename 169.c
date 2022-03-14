/*************************************************************************
	> File Name: 169.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月14日 星期一 21时56分02秒
 ************************************************************************/

#include<stdio.h>

//使用指针带回最值
void max_min(int *arr, int n, int *max, int *min)
{
	int i = 0;
	*max = arr[0];
	*min = arr[0];

	for (i = 0; i < n; i++)
	{
		if (arr[i] > *max)
		{
			*max = arr[i];
		}

		if (arr[i] < *min)
		{
			*min = arr[i];
		}
	}
}

//用指针求数组的最值
int main()
{
	int arr[10] = {0};
	int i = 0;
	int max = 0;
	int min = 0;

	printf("input 10 integer number you want to operate:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	max_min(arr, sizeof(arr)/sizeof(arr[0]), &max, &min);

	printf("The maximum number is : %d\n", max);
	printf("The minimum number is : %d\n", min);

	return 0;
}
