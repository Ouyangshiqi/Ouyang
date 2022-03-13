/*************************************************************************
	> File Name: 121.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 14时07分42秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
	double inte = 0;
	double decimal = 0;
	double num = 0;

	printf("please input number:");
	scanf("%lf", &num);
	
	//modf函数分离一个数的小数部分和整数部分， 返回值为小数部分， 传址参数为整数部分
	decimal = modf(num, &inte);

	printf("%lf = %lf + %lf\n", num, inte, decimal);

	return 0;
}
