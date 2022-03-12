#include <stdio.h>


//矩阵的转置
int main()
{
	int arr[256][256] = {{0}};
	int i = 0, j = 0;
	int row = 0, col = 0;

	printf("please input the number of rows(<=256)\n");
	scanf("%d", &row);
	printf("please input the number of columns(<=256)\n");
	scanf("%d", &col);

	printf("please input the element\n");
	for(i = 0; i < row; i++)
		{
			for(j = 0; j < col; j++)
				{
					scanf("%d", &arr[i][j]);
					if(i == 0 && j == 0)
						{
							printf("array a:\n");
						}
					printf("%6d", arr[i][j]);
				}
			printf("\n");
		}

	printf("array b;\n");
	for(i = 0; i < col; i++)
		{
			for(j = 0; j < row; j++)
				{
					printf("%6d", arr[j][i]);
				}
			printf("\n");
		}
	return 0;
}
