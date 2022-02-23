#include <stdio.h>

void bubbingsort(int arr[], int n)
{
	int i, j;
	int temp;

	for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
				{
					if(arr[i]>arr[j])
						{
							temp = arr[i];
							arr[i] = arr[j];
							arr[j] = temp;
						}
				}
		}
}


int main()
{
	int n;
	int i;
	
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	
	bubbingsort(arr,n);
	for(i=0;i<n;i++)
		{
			printf("%d  ",arr[i]);
		}
	putchar('\n');
	return 0;
}
