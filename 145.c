/*************************************************************************
	> File Name: 145.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月14日 星期一 18时25分55秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//升序排列
int asc_cmp(const void *ele1, const void *ele2)
{
	return *(int *)ele1 - *(int *)ele2;
}

//降序排列
int des_cmp(const void *ele1, const void *ele2)
{
	return *(int *)ele2 - *(int *)ele1;
}

//整型数组输出
void print(int *arr, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//使用qsort进行排序
int main()
{
	int arr[10] = {125, -26, 53, 12, -6, 95, 46, 85, -45, 785};

	print(arr, 10);

	qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(int), asc_cmp);
	print(arr, 10);

	qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(int), des_cmp);
	print(arr, 10);

	return 0;
}
