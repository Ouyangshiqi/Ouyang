/*************************************************************************
	> File Name: 117.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 12时26分34秒
 ************************************************************************/

#include<stdio.h>


int Max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int a = 0;
	int b = 0;
	int max = 0;

	printf("input two number:\n");
	scanf("%d%d", &a, &b);

	max = Max(a, b);

	printf("max = %d\n", max);
	return 0;
}
