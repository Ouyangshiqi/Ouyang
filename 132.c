/*************************************************************************
	> File Name: 132.c
	> Author: csgec

	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月14日 星期一 10时19分36秒
 ************************************************************************/

#include<stdio.h>
#include<time.h>

int main()
{
	time_t tm;
	struct tm * d;

	tm = time(&tm);
	d = localtime(&tm);
	
	printf("the current day is: %d--%d--%d\n", ((struct tm *)d)->tm_year, ((struct tm *)d)->tm_mon, ((struct tm *)d)->tm_mday);
	printf("thecurrent time is: %d : %d : %d\n", ((struct tm *)d)->tm_hour, ((struct tm *)d)->tm_min, ((struct tm *)d)->tm_sec);

	return 0;
}
