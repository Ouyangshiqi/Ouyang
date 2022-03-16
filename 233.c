/*************************************************************************
	> File Name: 233.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 21时36分59秒
 ************************************************************************/

#include<stdio.h>

#define AA 1

int main()
{
	char *password = "abcdefg";

#if AA

	printf("*******\n");

#else

	printf("%s\n", password);

#endif
	return 0;
}
