/*************************************************************************
	> File Name: 216.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 14时58分22秒
 ************************************************************************/

#include<stdio.h>

//将输入的数左移两位并输出
int main()
{
	int num =0;

	printf("Input a number : ");
	scanf("%d", &num);

	printf("result : %d\n", num << 2);

	return 0;
}
