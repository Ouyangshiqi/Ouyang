#include <stdio.h>

int main()
{
	int i;
	int count = 0;
	printf("结果是：\n");
	for(i = 10; i < 100; i++)
		{
			if(i%10 + i/10 < (i%10) * (i/10))
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
