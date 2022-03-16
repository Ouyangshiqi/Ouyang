/*************************************************************************
	> File Name: 224.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 19时40分22秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//调用calloc()函数动态分配内存
int main()
{
	int *arr = NULL;
	int n = 0;
	int i = 0;

	printf("Please input number of array : ");
	scanf("%d", &n);

	printf("为%d个数据分配每次空间 ", n);
	arr = (int *)calloc(n, sizeof(int));
	if (arr == NULL)
	{
		perror("calloc arr");
		return 0;
	}

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		printf("%4d", arr[i]);
	}
	printf("\n");

	free(arr);
	arr = NULL;

	return 0;
}
