#include <stdio.h>

int main()
{
	int i, j, k;
	for(i = 0; i <= 2; i++)
		{
			for(j = 0; j <= 5; j++)
				{
					for(k = 0; k <= 10; k++)
						{
							if(i*5 +j*2 + k == 10)
								{
									printf("yi jiao %2d, liang jiao %d, wu jiao %d\n", k, j, i);
								}
						}
				}
		}
	return 0;
}
