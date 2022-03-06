#include <stdio.h>

int main()
{
	int n, i;
	double sum = 1;
	printf("please input an integer>=0.\n");
	scanf("%d", &n);
	if(n == 0 || n == 1)
		{
			sum = 1;
		}
	else
		{
			while(n)
				{
					sum *= n--;
				}
		}
	printf("facterial of %d is:%.lf\n", n, sum);
	return 0;
}
