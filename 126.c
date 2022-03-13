/*************************************************************************
	> File Name: 126.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 16时56分41秒
 ************************************************************************/

#include<stdio.h>

//计算n的阶乘，并返回double型的值
double factorial(int n)
{
	int i = 0;
	double sum = 1;

	if (n == 0 || n == 1)
	{
		return 1;
	}

	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}

	return sum;
}

//打印1～5的阶乘
int main()
{
	int i = 1;

	for (i = 1; i <= 5; i++)
	{
		printf("%d! = %.lf\n", i, factorial(i));
	}

	return 0;
}
