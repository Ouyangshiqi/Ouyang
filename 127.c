/*************************************************************************
	> File Name: 127.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 17时06分49秒
 ************************************************************************/

#include<stdio.h>

//求两个数的最大公约数
int tow_gcd(int a, int b)
{
	while (a && b)
	{
		if (a > b)
		{
			a = a % b;
		}
		else
		{
			b = b % a;
		}
	}

	return a > b ? a : b;
}

//求两个数的最小公倍数
int tow_lcm(int a, int b)
{
	int i = tow_gcd(a, b);

	return a * b / i;
}

//求最大公约数和最小公倍数
int main()
{
	int gcd = 0; // 最大公约数
	int lcm = 0; // 最小公倍数
	int a = 0;
	int b = 0;

	printf("input tow integer number:\n");
	scanf("%d%d", &a, &b);
	gcd = tow_gcd(a, b);
	lcm = tow_lcm(a, b);

	printf("最大公约是为：%d\n最小公倍数为：%d\n", gcd, lcm);

	return 0;
}
