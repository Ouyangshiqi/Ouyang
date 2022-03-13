/*************************************************************************
	> File Name: 131.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 18时21分11秒
 ************************************************************************/

#include<stdio.h>
#include<time.h>
#include<unistd.h>

//显示程序运行时间
int main()
{
	time_t start = 0;
	time_t end = 0;
	start = time(NULL);

	sleep(5);
	
	end = time(NULL);

	printf("runtime is : %f(s)\n", difftime(end, start));
	return 0;
}
