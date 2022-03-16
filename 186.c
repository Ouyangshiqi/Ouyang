/*************************************************************************
	> File Name: 186.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 12时23分37秒
 ************************************************************************/

#include<stdio.h>

int find_min(int a, int b)
{
	return a < b ? a : b;
}

//用指向函数的指针比较大小
int main()
{
	int a = 0;
	int b = 0;
	int min = 0;
	int (*p)(int, int) = find_min;

	printf("Please input tow inteber number :\n");
	scanf("%d%d", &a, &b);

	min = (*p)(a, b);

	printf("min = %d\n", min);
	return 0;
}
