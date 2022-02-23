#include <stdio.h>

void shsort(int arr[], int n)
{
	int i, j ,d;
	int flag=0;
	d = n/2 ;

	while(d>=1)
		{
			for(i=d+1;i<=n;i++)
				{
					arr[0] = arr[i];
					j = i-d;
					while(j>0 && arr[0]<arr[j])
						{
							arr[j+d] = arr[j];
							j = j-d;
						}
					arr[j+d] = arr[0];
				}

			d /= 2;
		}
}



int main()
{
	int n=99;
	//scanf("%d",&n);
	int arr[n+1];
	int i;
	for(i=n;i>=1;i--)
		{
			//scanf("%d",&arr[i]);
			arr[i] = n-i;
		}

	shsort(arr,n);
	for(i=1;i<=n;i++)
		{
			printf("%d  ",arr[i]);
		}
	putchar('\n');
	return 0;
}

