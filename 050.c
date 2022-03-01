#include <stdio.h>

//计算个个位数的立方的和  ，并返回
int sxh(int num)
{
	int sum = 0;
	int temp;
	while(num)
		{
			temp = num % 10;
			sum += temp * temp * temp;
			num /= 10;
		}
	return sum;
}

int main()
{
	int i;
	for(i = 100; i < 1000; i++)
		{
			if(sxh(i) == i)
				{
					printf("%d\t", i);
				}
		}
	printf("\n");
	return 0;
}
