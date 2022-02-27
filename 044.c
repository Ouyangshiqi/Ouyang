#include <stdio.h>

//亲密数
int main()
{
	int a[10000] = {0}; //存放除了本身的因子和
	int i, j;
	int count = 0;
	for(i = 2; i < 10000; i++)
		{
			for(j = 1; j < i; j++)
				{
					if(i % j == 0)
						{
							a[i] += j;
						}
					count++;
				}
		}
	for(i = 2; i < 10000-1; i++)
		{
			for(j = i+1; j < 10000; j++)
				{
					if(i == a[j] && j == a[i])
						{
							printf("%d =>- %d\n", i, j);
						}
					count++;
				}
		}
	printf("%d\n", count);
	return 0;
}
