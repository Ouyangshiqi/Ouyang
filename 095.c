#include<stdio.h>

int main()
{
	int arr[3][3] = {0};
	int i = 0;
	int j = 0;
	int sum = 0;

	for(i = 0; i < 3; i++)
		{
			for(j = 0; j < 3; j++)
				{
					scanf("%d", &arr[i][j]);
					printf("%d ", arr[i][j]);
					sum += arr[i][j];
				}
			printf("\n");
		}
	printf("sum = %d\n", sum);
	return 0;
}
