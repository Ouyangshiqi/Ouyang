/*************************************************************************
	> File Name: 228.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 20时59分32秒
 ************************************************************************/

#include<stdio.h>
#define AREA(a, b)  ((a)*(b))

//用不带参数的宏定义求平行四边形面积
int main()
{
	int area = 0;

	area = AREA(6,8);

	printf("AREA = %d\n", area);

	return 0;
}
