#include <stdio.h>

int main()
{
	int i;
	int count = 0;
	int sum = 0;
	int n = 0;
	for(i = 100; i < 1000; i++)
		{
			n = i;
			sum = 0;
			while(n)
				{
					sum += n%10;
					n /= 10;
				}
			if(sum == 5)
				{
					printf("%d\t", i);
					count++;
					if(count == 5)
						{
							printf("\n");
							count = 0;
						}
				}
		}
	printf("\n");
	return 0;
}
