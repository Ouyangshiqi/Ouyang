/*************************************************************************
	> File Name: 175.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月15日 星期二 14时54分39秒
 ************************************************************************/

#include<stdio.h>

//用指针数组构造字符串数组
int main()
{
	char * arr[8] = {0, "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int n = 0;

	printf("Please enter a number for week(1~7)\n");
	while (1)
	{
		scanf("%d", &n);
		if (n > 0 && n < 8)
		{
			break;
		}
		printf("输入错误，请重新输入(1~7)\n");
	}

	printf("The week is : %s\n", arr[n]);

	return 0;
}
