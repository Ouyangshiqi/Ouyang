/*************************************************************************
	> File Name: 122.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 14时21分29秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

//求任意数的n次幂
int main()
{
	double x = 0;
	double y = 0;
	int i = 0;

	printf("please input the base:\n");
	scanf("%lf", &x);
	printf("please input the power:\n");
	scanf("%lf", &y);

	while (i < 5)
	{
		printf("%.1lf^%.1lf is %.3lf\n", x, y+i, pow(x,y+i));
		i++;
	}

	return 0;
}
