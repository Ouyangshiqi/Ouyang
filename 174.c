/*************************************************************************
	> File Name: 174.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月15日 星期二 14时43分23秒
 ************************************************************************/

#include<stdio.h>

//将数组逆序
void inverted(int *arr, int n)
{
	int *left = arr;
	int *right = arr+n-1;
	int temp = 0;

	while (left < right)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

//用数组实现逆序存放数组元素值
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int i = 0;

	printf("The elements of original array:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	inverted(arr, 10);

	printf("The elements has been inverted:\n");
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
