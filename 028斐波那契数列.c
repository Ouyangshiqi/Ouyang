#include <stdio.h>

int main()
{
	int i, j=1;
	int old = 0;
	int save = 0;
	int new = 1;
	printf("%14d",1);
	for(i=1;i<30;i++)
		{
			printf("%14d",old+new);
			save = old;
			old = new;
			new += save;
			j++;
			if(j>4)
				{
					putchar('\n');
					j = 0;
				}
		}
	return 0;


	long f[31];
	f[1] = 1;
	f[2] = 1;
	for(i=0;i<31;i++)
		{
			f[i] = f[i-1]+f[i-2];
		}
	for(i=1;i<31;i++)
		{
			printf("%10ld",f[i]);
			if(5==i)
				{
					putchar('\n');
				}
		}
	
}
