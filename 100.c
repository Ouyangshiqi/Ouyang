#include <stdio.h>

int main()
{
	int arr[10] = {0};
	int sum[9] = {0};
	int i = 0;
	int count = 0;

	printf("please input array a:\n");
	for(i = 0; i < 10; i++)
		{
			scanf("%d", &arr[i]);
		}
	
	for(i = 0; i < 9; i++)
		{
			sum[i] = arr[i] + arr[i+1];
			count++;
			
			printf("%5d", sum[i]);
			if(count == 3)
				{
					printf("\n");
					count = 0;
				}
		}
	
	return 0;
}
