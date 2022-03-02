#include <stdio.h>

//求阶乘
double factorial(int n)
{
	int i;
	double sum = 1;
	
	if(1 == n || 0 == n)
		{
			return 1;
		}
	for(i = 2; i <= n; i++)
		{
			sum *= i;
		}
	return sum;
}

int main()
{
	double e = 0, n = 1, min = 1;
	int i = 0;
	
	for(i = 0; i < 10; i++)
		{
			min *= 10;
		}
	i = 0;
	min = 1/min;
	
	while(n >= min)
		{
			n = 1/factorial(i);
			e += n;
			i++;
		}
	
	printf("e 的值是：%lf\n", e);
	return 0;
}
