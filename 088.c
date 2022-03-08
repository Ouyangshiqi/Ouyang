#include <stdio.h>

//灯塔问题
int main()
{
	int min = 0;
	int max = 0;
	int sum = 0;
	int j = 0;
	//对顶层进行穷举
	for(min = 1; min < 10; min++)
		{
			max = min;
			sum = min;
			//求八层的灯的数量和
			for(j = 0; j < 7; j++)
				{
					max = max * 2;//保存塔底的灯的数量
					sum += max;
				}
			if(765 == sum)
				{
					break;
				}
		}
	printf("the first floor has %d\nthe eight floor has %d\n", min, max);
	return 0;
}
