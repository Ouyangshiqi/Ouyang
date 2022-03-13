/*************************************************************************
	> File Name: 129.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 17时54分04秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

//模拟实现ceil函数
float my_ceil(float n)
{
	if (n == (int)n)
	{
		return n;
	}

	return (int)n + 1;
}

//相对的最小整数
int main()
{
	float n = 0;

	printf("please inpout a number:\n");
	scanf("%f", &n);

	printf("%f\n", my_ceil(n));

	return 0;
}
