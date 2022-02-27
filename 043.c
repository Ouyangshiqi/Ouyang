#include <stdio.h>

//求等差数列
int main()
{
	int i, j, k , h, d;
	int n = 27;
	int flag = 0;
	int	count = 0;
	for(i = 1; i < n-3; i++)
		{
			for(j = i+1; j < n-2; j++)
				{
					for(k = j+1; k < n-1; k++)
						{
							for(h = k+1; h < n; h++)
								{

									if(i+j+k+h == n-1 && i*j*k*h == 880)
										{
											d = j-i;
											flag = 1;
											break;
										}
								}
							if(flag)
								{
									break;
								}
						}
					if(flag)
						{
							break;
						}
				}
			if(flag)
				{
					break;
				}
		}

	for(j = 0; j < 20; j++)
		{
			count++;
			printf("%2d  ", i + j*d);
			if(count == 5)
				{
					printf("\n");
					count = 0;
				}
		}
	return 0;
}
