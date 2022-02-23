#include <stdio.h>

void quicksort(int arr[], int start, int end)
{
	int i, j;
	i = start;
	j = end;
	arr[0] = arr[start];

	while(i<j)
		{
			while(i<j && arr[0]<arr[j])
				{
					j--;
				}
			if(i<j)
				{
					arr[i] = arr[j];
					i++;
				}
			while(i<j && arr[i]<=arr[0])
				{
					i++;
				}
			if(i<j)
				{
					arr[j] = arr[i];
					j--;
				}
		}
	arr[i] = arr[0];

	if(start<i)
		{
			quicksort(arr, start, j-1);
		}
	if(i<end)
		{
			quicksort(arr, j+1, end);
		}
}


void swap(int a[], int i, int j)
{
	int t;
	t = a[i];
	a[i] = a[j];
	a[j] = t;
}

void quicksort1(int arr[], int start, int end)
{
	int i, j, h;
	int flag;

	j = start;
	flag = arr[start];

	for(i=j+1;i<=end;i++)
		{
			if(flag>arr[i])
				{
					swap(arr, ++j,i);
				}
		}
	swap(arr, j, start);

	if(start<j-1)
		{
			quicksort1(arr, start, j-1);
		}
	if(end>j+1)
		{
			quicksort1(arr, j+1,end);
		}
}


int main()
{
	int n;
	int i;
	
	scanf("%d",&n);
	int arr[n+1];
	for(i=1;i<=n;i++)
		{
			scanf("%d",&arr[i]);
		}
	
	quicksort(arr, 1, n);
	for(i=1;i<=n;i++)
		{
			printf("%d  ",arr[i]);
		}
	putchar('\n');
	return 0;
}

