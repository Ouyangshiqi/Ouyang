#include <stdio.h>


//求最大公约数
int com_divisor(int a, int b)
{
	while(a > 0 && b > 0)
		{
			if(a >b)
				{
					a = a % b;
				}
			else
				{
					b = b % a;
				}
		}
	return a>b ? a : b;
}


//输出a b 的最大公约数和最小公倍数
int main()
{
	int a, b;
	int max, min;
	
	printf("请输入两个正整数 a，b：");
	scanf("%d%d", &a, &b);
	max = com_divisor(a, b);
	min = a * b / max;
	
	printf("最大公约数是：%d\n最小公倍数是：%d\n", max, min);
	
	return 0;
}
