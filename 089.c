#include <stdio.h>


//求1~10的平方和
int main()
{
	int i = 0;
	int sum = 0;
	for(i = 1; i <= 10; i++)
		{
			sum += i*i;
		}
	printf("sum = %d\n", sum);
	return 0;
}
