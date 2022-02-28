#include <stdio.h>

//将一个数的顺序反过来
int Reversed(int num)
{
	int sum = 0;
	while(num > 0)
		{
			sum = sum * 10 + num % 10;
			num /= 10;
		}
	return sum;
}


//判断是否为素数，是返回值 1          	  不是返回值 0
int Prime(int num)
{
	int i;


	for(i = 2; i < num; i++)
		{
			
			if(num % i == 0)
				{
					break;
				}
		}
	if(i == num)
		{
			return 1;
		}
	else
		{
			return 0;
		}

}



//可逆素数
int main()
{
	int num;
	int count = 0;
	int i, j;


	for(i = 1000; i < 10000; i++)
		{
			if(Prime(i) == 1)
				{
					if(Prime(Reversed(i)) == 1 && Reversed(i) > i)
						{
							printf("%6d", i);
							count++;
							if(count == 10)
								{
									printf("\n");
									count = 0;
								}
						}
				}
		}
	printf("\n");
	return 0;
}
