#include <stdio.h>

//判断是否为素数， 是素数返回1， 不是返回0
int prime_number(const int num)
{
	int i;
	if(num < 2)
		{
			return 0;
		}
	
	for(i = 2; i < num; i++)
		{
			if(num % i == 0)
				{
					return 0;
				}
		}
	return 1;
}

//将一个整数倒过来， 高位变低位， 低位变高位
int backspin(int num)
{
	int sum = 0;
	while(num)
		{
			sum *= 10;
			sum += num % 10;
			num /= 10;
		}
	return sum;
}
int main()
{
	int i, j;
	for(i = 2; i < 1000; i++)
		{
			if(prime_number(i) == 1)
				{
					if(i == backspin(i) && i > 10)//必须是两位数以上才能构成回文素数
						{
							printf("%d  ", i);
						}
				}
		}
	printf("\n");
	return 0; 
}
