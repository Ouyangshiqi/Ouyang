/*************************************************************************
	> File Name: 218.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 18时19分37秒
 ************************************************************************/

#include<stdio.h>

//取出给定16位二进制数的奇数位
int main()
{
	int n = 0;
	int t = 0;
	int i = 0;

	printf("请输入一个八进制数：\n");
	scanf("%o", &n);

	for (i = 1; i < 16; i += 2)
	{
		t += n & 1<<i;
	}

	printf("result is : %o\n", t);

	return 0;
}
