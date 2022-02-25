#include <stdio.h>

int prime_num(int a[], int n)
{
	int i, j,m = 2;
	a[0] = 2;
	a[1] = 3;
	for(j=5;j<n;j++)
		{
			for(i=0;i<m;i++)
				{
					if(j%a[i] == 0)
						{
							break;
						}
				}
			if(i==m)
				{
					a[m++] = j;
				}
		}
	return m;
}

int main()
{
	int a[100] = {0};
	int n,  num;
	int i, count = 0;
	n = prime_num(a,100);
	
	scanf("%d",&num);
	for(i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
				{
					if(a[i]+a[j] == num)
						{
							printf("%2d = %2d + %2d,  ", num, a[i], a[j]);
							count++;
							if(count == 5)
								{
									putchar('\n');
									count = 0;
								}
							break;
						}
				}
		}
	putchar('\n');
	return 0;
}
