#include <stdio.h>

//杨辉三角
void yanghui(int (*arr)[10], int n)
{
	int i, j;
	for(i = 0; i < n; i++)
		{
			for(j = 0; j <= i; j++)
				{
					if(i == j || j == 0)	//第一列和对角线的都为1
						{
							arr[i][j] = 1;
						}
					else
						{
							arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
						}
				}
		}
}

int main()
{
	int arr[10][10] = {0};
	yanghui(arr, 10);
	for(int i = 0; i < 10; i++)
		{
			for(int j = 0; j <= i; j++)
				{
					printf("%-6d", arr[i][j]);
				}
			printf("\n");
		}
	return 0;
}
