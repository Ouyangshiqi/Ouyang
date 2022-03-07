#include <stdio.h>
#include <assert.h>

int main()
{
	int num;
	int i;
	printf("please input a number:\n");
	scanf("%d", &num);
	assert(num != 0);
	int sum = num;
	while(sum != 1 && sum != 145)
		{
			num = sum;
			sum = 0;
			printf("num = %d -> ", num);
			while(num)
				{
					sum += (num%10)*(num%10);
					printf("%d * %d", num%10, num%10);
					num /= 10;
					if(num != 0)
						{
							printf(" + ");
						}
				}
			printf(" = %d\n", sum);
				
		}
	return 0;
}
