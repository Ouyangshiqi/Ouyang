/*************************************************************************
	> File Name: 147.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月14日 星期一 21时01分56秒
 ************************************************************************/

#include<stdio.h>
#include<time.h>

int main()
{
	time_t Time;

	time(&Time);
	printf("%s\n", ctime(&Time));
	return 0;
}
