/*************************************************************************
	> File Name: 180.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 10时18分25秒
 ************************************************************************/

#include<stdio.h>

//输入月份号并输出英文月份名
int main()
{
	char * month[] = {"January", "February", "March", "April", "May", "June",
						"July", "August", "September", "October", "November", "December"};
	int n = 0;

	printf("Input a number for month\n");
	scanf("%d", &n);

	printf("The month is : %s\n", month[n-1]);

	return 0;
}
