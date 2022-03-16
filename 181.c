/*************************************************************************
	> File Name: 181.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 10时32分05秒
 ************************************************************************/

#include<stdio.h>

void insert(int *arr, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		if (arr[i] >= n)
		{
			for (j = 9; j >= i; j--)
			{
				arr[j+1] = arr[j];
			}

			break;
		}
	}

	arr[i] = n;
}

//使用指针插入元素
int main()
{
	int arr[11] = {0};
	int i = 0;
	int n = 0;

	printf("Input 10 seriate integer : \n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("input inserting data : ");
	scanf("%d", &n);

	insert(arr, n);

	printf("The inserted array:\n");
	for (i = 0; i < 11; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0; 
}
