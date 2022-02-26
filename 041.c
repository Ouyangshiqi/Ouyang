#include <stdio.h>
#include <math.h>

//特殊的完全平方数
int main()
{
	int i, j;
	int n;
	for(i=100;i<1000;i++)
		{
			if(sqrt((float)i) == (int)sqrt((float)i))	//判断开平方后的数是不是整数
				{
					n = i/10;
					j = i/100;
					if(i%10 ==n%10 || j%10 == i%10 || n%10 == j%10)	//判断是否有两个数相同
						{
							printf("%d  ",i);
						}
				}
		}
	putchar('\n');
	return 0;
}
