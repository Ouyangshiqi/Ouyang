/*************************************************************************
	> File Name: 225.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 19时51分21秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//为具有3个数组元素的数组分配内存
int main()
{
	int *arr = (int *)calloc(3, 4);
	int i = 0;

	for (i = 1; i < 4; i++)
	{
		arr[i-1] = i * 10;
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}

	free(arr);
	arr = NULL;

	return 0;
}
