#include <stdio.h>

//数组对角线之和
int main()
{
	int arr[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
	int i = 0;
	int j = 0;
	int sum = 0;
	
	for(i =0; i < 4; i++)
		{
			for(j = 0; j < 4; j++)
				{
					if(i == j)
						{
							sum += arr[i][j];
						}
				}
		}
	printf("the sum of the diagonal is %d\n", sum);
	return 0;
}
