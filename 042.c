#include <stdio.h>
#include <math.h>

//一数三平方
/*int main()
{
	int i,j,k;
	int n, count =0;
	
	for(i=100;i<1000;i++)	
		{
			if(sqrt((float)i) == (int)sqrt((float)i))	//判断高三位是否是完全平方数
				{
					for(j=1;j<1000;j++)
						{
							if(sqrt((float)j) == (int)sqrt((float)j))	//判断低三位是否是完全平方数
								{
									n = i*1000 + j;
									if(sqrt((float)n) == (int)sqrt((float)n))	//判断这个六位数是否是完全平方数
										{
											count++;
											printf("%d  ",n);
										}
								}
						}
				}
		}
	printf("\n满足条件的有：%d个\n", count);
	return 0;
}*/


int main()
{
	int i, j, k;
	int count = 0;

	for(i=100000;i<1000000;i++)
		{
			if(sqrt((float)i) == (int)sqrt((float)i))	//判断这个六位数是否是完全平方数
				{
					j = i%1000;
					k = i/1000;
					if(sqrt((float)k) == (int)sqrt((float)k) && sqrt((float)j) == (int)sqrt((float)j))	//判断高三位和第三位是否为完全平方数
						{
							count++;
							printf("%d,  ",i);
						}
				}
		}
	
	printf("\n满足条件的有：%d个\n", count);
	return 0;
}
