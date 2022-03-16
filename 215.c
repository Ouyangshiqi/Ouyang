/*************************************************************************
	> File Name: 215.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 14时48分28秒
 ************************************************************************/

#include<stdio.h>

//是二进制书的特定位翻转
//一个二进制数与1异或，结果翻转，与0异或，结果不变
int main()
{
	int num = 0;
	int a = 15;

	printf("Input a number: ");
	scanf("%d", &num);

	printf("result: %d\n", num ^ a);

	return 0;
}
