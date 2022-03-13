/*************************************************************************
	> File Name: 119.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 13时14分36秒
 ************************************************************************/

#include<stdio.h>

int Age(int n)
{
	if (n == 1)
	{
		return 10;
	}
	return Age(n-1) + 2;
}

int main()
{
	int n = 0;
	int age = 0;

	printf("Do you want to know whose age?\nPlease input(1~5):");
	scanf("%d", &n);

	age = Age(n);

	printf("the age is %d\n", age);

	return 0;
}
