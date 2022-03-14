/*************************************************************************
	> File Name: 166.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月14日 星期一 21时26分11秒
 ************************************************************************/

#include<stdio.h>

//交换两个数
void swap(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

//从小到大排序
void rank_three(int *a, int *b, int *c)
{
	if (*a < *b)
	{
		swap(a, b);
	}
	
	if (*a < *c)
	{
		swap(a, c);
	}

	if (*b < *c)
	{
		swap(b, c);
	}
}

//实现三个数从小到大输出
int main()
{
	int a, b, c;
	
	printf("Please input three key numbers you want to rank:\n");
	scanf("%d%d%d", &a, &b, &c);

	rank_three(&a, &b,&c);

	printf("%d %d %d\n", a, b, c);

	return 0;
}
