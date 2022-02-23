#include <stdio.h>


void swap(int a[], int i, int j)
{
	int t;
	t = a[i];
	a[i] = a[j];
	a[j] = t;
}

void selectionsort(int arr[], int n)
{
	int i, j;

	for(i=0;i<n-1;i++)
		{
			for(j=i;j<n;j++)
				{
					if(arr[i]>arr[j])
						{
							swap(arr, i, j);
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
	
	selectionsort(arr,n);
	for(i=0;i<n;i++)
		{
			printf("%d  ",arr[i]);
		}
	putchar('\n');
	return 0;
}

