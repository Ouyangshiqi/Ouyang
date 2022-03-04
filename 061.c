#include <stdio.h>
#include <math.h>

int main()
{
	float i;
	printf("输入一个数： \n");
	scanf("%f", &i);
	printf("得到的结果为：\n");
	printf("%f\n", ceil(i));
	return 0;
}
