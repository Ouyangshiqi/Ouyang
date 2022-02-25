#include <stdio.h>

//小球下落问题
int main()
{
	int i;
	float high = 100;
	float sum = high;
	for(i=2;i<=10;i++)
		{
			high /= 2;
			sum += high*2;
		}
	printf("总长度是：%lf\n第十次落地后弹起的高度是：%lf\n",sum, high/2);
	return 0;
}
