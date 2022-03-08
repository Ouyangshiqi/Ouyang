#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//产生随机数
int main()
{
	srand(time(0));
	int i;
	for(i = 0; i < 10; i++)
		{
			printf("随机发生的数%d是：%d\n", i, rand()%100);
		}
	return 0;
}
