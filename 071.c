#include <stdio.h>

int main()
{
	float grade[4] = {0};
	float max = 0, min = 100;
	printf("输入四个成绩: \n");
	for(int i = 0; i < 4; i++)
		{
			scanf("%f", &grade[i]);
			if(max < grade[i])
				{
					max = grade[i];
				}
			if(min > grade[i])
				{
					min = grade[i];
				}
		}
	printf("min = %3.2f  max = %3.2f\n", min, max);
	return 0;
}
