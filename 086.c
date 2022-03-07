#include <stdio.h>

//彩球问题
int main()
{
	int i, j, k;
	int time = 1;
	printf("the result is:\n\ntime  red   white  black\n");
	for(i = 0; i <= 3; i++)
		{
			for(j = 0; j <= 3; j++)
				{
					for(k = 0; k <= 6; k++)
						{
							if(i+j+k == 8)
								{
									printf("%-7d%-7d%-7d%-7d\n", time++, i, j, k);
								}
						}
				}
		}
	return 0;
}
