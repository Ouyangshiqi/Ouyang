#include <stdio.h>

int main()
{
	float grade = 0;
	int count = 0;
	int i = 20;
	printf("enter score of course number : \n");
	while(i--)
		{
			scanf("%f", &grade);
			if(grade < 60)
				{
					count++;
				}
		}
	printf("the  cuont of fail is %d\n", count);
	return 0;
}
