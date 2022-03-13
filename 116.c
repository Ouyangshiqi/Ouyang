/*************************************************************************
	> File Name: 116.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 12时04分18秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *arr = NULL;
	int n = 0;
	int i = 0;
	int temp = 0;
	int max = 0;
	int max_s = 0; //最大值的下标
	int min = 999999;
	int min_s = 0; //最小值的下标
	
	printf("please input the number of elements:\n");
	scanf("%d", &n);

	arr = (int *)calloc(n, sizeof(int));	//开辟所需要的内存空间
	if (arr == NULL)
	{
		perror("calloc arr");
		return 0;
	}

	printf("please input the element :\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		//保存最大值的下标
		if (arr[i] > max)
		{
			max = arr[i];
			max_s = i;
		}
		//保存最小值的下标
		if (arr[i] < min)
		{
			min = arr[i];
			min_s = i;
		}
	}

	//将最大值和最小值交换
	temp = arr[max_s];
	arr[max_s] = arr[min_s];
	arr[min_s] = temp;

	//打印交换后的数字
	printf("the position of min is: %d\n", min_s);
	printf("the position of max is: %d\n", max_s);
	printf("Now the array is :\n");
	for(i = 0; i < n; i++)
	{
		printf("%4d", arr[i]);
	}
	printf("\n");

	//释放动态开辟的空间
	free(arr);
	arr = NULL;

	return 0;
}
