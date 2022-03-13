/*************************************************************************
	> File Name: 128.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 17时20分29秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

double hypotenuse(double a, double b)
{
	double c = 0;

	c = sqrt(a*a+b*b);

	return c;
}

//求直角三角形斜边
int main()
{
	double a = 0;
	double b = 0;
	double c = 0;

	printf("please input tow orthogonal sides:\n");
	scanf("%lf%lf", &a, &b);

	c = hypotenuse(a, b);

	printf("hypotenuse is : %lf\n", c);

	return 0;
}
