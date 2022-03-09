#include <stdio.h>

int main()
{
	int arr[2][3] = {0};
	int i = 0, j = 0;

	for(i = 0; i < 2; i++)
		{
			for(j = 0; j < 3; j++)
				{
					printf("a[%d][%d] = ", i, j);
					scanf("%d", &arr[i][j]);
				}
		}
	printf("输出二维数组\n");
	for(i = 0; i < 2; i++)
		{
			for(j = 0; j < 3; j++)
				{
					printf("%-5d", arr[i][j]);
				}
			printf("\n");
		}
	return 0;
}
