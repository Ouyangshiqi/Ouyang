/*************************************************************************
	> File Name: 118.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 12时31分30秒
 ************************************************************************/

#include<stdio.h>

int Prime(int num)
{
	int i;

	if(num == 1 || num ==2)
	{
		return 1;
	}
	for (i = 2; i < num/2+1; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int num = 0;

	printf("input an integer:");
	scanf("%d", &num);

	if (Prime(num) == 1)
	{
		printf("%d is a prime\n", num);
	}
	else
	{
		printf("%d is not a prime\n", num);
	}

	return 0;
}
