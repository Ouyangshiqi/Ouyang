#include <stdio.h>

int main()
{
	int n = 0;
	int i, j;
	int sum = 0;

	scanf("%d",&n);
	n *=n*n;
	for(i=1;i<n/2;i+=2)
		{
			sum = 0;
			for(j=i;j<n/2;j+=2)
				{
					sum += j;
					if(sum>n)
						{
							break;
						}
					else if(sum == n)
						{
							printf("%d = %d ",n,j);
							for(j-=2;j>=i;j-=2)
								{
									printf("+ %d ",j);
								}
							putchar('\n');
							break;
						}
				}
		}
	return 0;
}
