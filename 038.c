#include <stdio.h>

int main()
{
	int n,i;
	int x[7] = {0};
	int y[7] = {0};
	n = 2520/6;
	for(i=2;i<7;i++)
		{
			y[i] = n * (9-i)/(8-i);		//得到哥哥分来的苹果，但是没有分给弟弟的苹果数
		}
	y[1] = x[1] = (n - y[6]/3)*8/7;
	for(i=2;i<7;i++)
		{
			x[i] = y[i] - y[i-1]/(10-i);
		}
	for(i=1;i<7;i++)
		{
			printf("brother[%d] = %d\n", i, x[i]);
		}
	return 0;
}
