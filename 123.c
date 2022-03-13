/*************************************************************************
	> File Name: 123.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 14时35分25秒
 ************************************************************************/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//固定格式输出当前时间
int main()
{
	time_t t = 0;
	struct tm *date;

	t = time(&t);
	date = localtime(&t);

	printf("%s\n", asctime(date));

	return 0;
}
