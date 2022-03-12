#include <stdio.h>


//模拟比赛打分
int main()
{
	float arr[100][6] = {{0}};
	int i = 0;
	int j = 0;
	int n = 0;
	float sum = 0;
	printf("Enter the number of players:\n");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
		{
			printf("now player %d\nplease input score:\n", i+1);
			for(j = 0; j < 5; j++)
				{
					scanf("%f", &arr[i][j]);
					sum += arr[i][j];
				}
			arr[i][j] = sum;
			sum = 0;
		}

	printf("player    judgeA    judgeB    judgeC    judgeD    judgeE    total\n");
	for(i = 0; i < n; i++)
		{
			printf("player %d   ", i+1);
			for(j = 0; j < 6; j++)
				{
					printf("%.1f      ", arr[i][j]);
				}
			printf("\n");
		}
	return 0;
}
