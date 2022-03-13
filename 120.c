/*************************************************************************
	> File Name: 120.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 13时23分15秒
 ************************************************************************/

#include<stdio.h>

int dispense_fish(int n)
{
	static int i = 1;
	int sum = 0;
	if (1 == n)
	{
		//确保第五个人能够分成五分并且多一只
		while (1)
		{
			if (i%5 == 1)
			{
				return i;
			}
			i++;
		}
	}

	//确保前面四个人能够分成五分并且多一只
	do
	{
		sum = dispense_fish(n-1);
		i++;
	}while(sum*5%4 != 0);

	sum = sum * 5 / 4 +1;
	return sum;
}

//分鱼问题
int main()
{
	int sum = 0;

	sum = dispense_fish(5);

	printf("the total number of fish is %d\n", sum);

	return 0;
}
