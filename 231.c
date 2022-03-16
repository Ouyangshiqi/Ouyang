/*************************************************************************
	> File Name: 231.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 21时27分38秒
 ************************************************************************/

#include<stdio.h>

#define EVEN(a) ((a) % 2)

//利用宏求偶数和
int main()
{
	int i = 0;
	int sum = 0;

	for (i = 0; i <= 100; i++)
	{
		if (EVEN(i) == 0)
		{
			sum += i;
		}
	}

	printf("SUM = %d\n", sum);

	return 0;
}
