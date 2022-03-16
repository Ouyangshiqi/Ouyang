/*************************************************************************
	> File Name: 217.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 15时03分28秒
 ************************************************************************/

#include<stdio.h>

unsigned int move(unsigned int num, int n)
{
	unsigned t = num;

	if (n > 0)	//循环左移
	{
		t = t >> (32 - n);
		num = num << n;
		num = t | num;
	}
	else		//循环右移
	{
		t = t << (32 + n);
		num = num >> -n;
		num = t | num;
	}

	return num;
}

//编写循环移位函数
int main()
{
	unsigned int num = 0;
	int n = 0;

	printf("请输入一个数：\n");
	scanf("%d", &num);
	printf("请输入要位移的位数(大于0左移，小于0右移):\n");
	scanf("%d", &n);

	num = move(num, n);

	printf("移位后的结果是：%u\n", num);

	return 0;
}
