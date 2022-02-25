#include <stdio.h>

int main()
{
	int i, j, n = 2, count = 0;
	int a[1000] = {0};
	a[0] = 2;
	a[1] = 3;
	for(i=5;i<200;i++)
		{
			for(j=0;j<n;j++)
				{
					if(i%a[j] == 0)
						{
							break;
						}
				}
			if(j == n)
				{
					if(i>100)
						{
							printf("%d,",i);
							count++;
							if(count == 5)
								{
									putchar('\n');
									count = 0;
								}
						}
					a[n++] = i;
				}
		}
	putchar('\n');
	return 0;	
}
