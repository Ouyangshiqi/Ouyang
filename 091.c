#include <stdio.h>

//卖西瓜
int main()
{
	int n = 1020;
	int day = 0;
	while(n)
		{
			day++;
			n = n/2-2;
		}
	printf("day = %d\n", day);
	return 0;
}
