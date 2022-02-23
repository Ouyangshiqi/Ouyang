#include <stdio.h>

void insert(int arr[], int n)
{
	int i, j;
	int flag=0;

	for(i=2;i<=n;i++)
		{
			arr[0] = arr[i];
			for(j=i-1;arr[0]<arr[j];j--)
				{
					arr[j+1] = arr[j];
				}
			arr[j+1] = arr[0];;
		}
}

int main()
{
	int n=100;
	//scanf("%d",&n);
	int arr[n+1];
	int i;
	for(i=n;i>=1;i--)
		{
			//scanf("%d",&arr[i]);
			arr[i] = n-i;
		}

	insert(arr,n);
	for(i=1;i<=n;i++)
		{
			printf("%d  ",arr[i]);
		}
	putchar('\n');
	return 0;
}
