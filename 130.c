/*************************************************************************
	> File Name: 130.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 18时05分16秒
 ************************************************************************/

#include<stdio.h>
#include<time.h>

//当前时间转换
int main()
{
	time_t t = 0;
	struct tm * date = NULL;

	time(&t);
	date = localtime(&t);
	//当地时间
	printf("%s", asctime(date));

	date = gmtime(&t);
	//格林威治时间
	printf("%s", asctime(date));

	return 0;
}
