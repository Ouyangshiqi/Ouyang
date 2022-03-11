#include <stdio.h>
#include <stdlib.h>

//输出最值和最值所在的下标
int main()
{
	int * arr = NULL;
	int n = 0;
	int i = 0;
	int max = 0;
	int max_sub = 0;
	int min = 9999999;
	int min_sub = 0;
	
	printf("please input the number of elements:\n");
	scanf("%d", &n);
	arr = (int *)malloc(n*sizeof(int));

	printf("please input the element:\n");
	for(i = 0; i < n; i++)
		{
			scanf("%d", arr+i);
			if(arr[i] > max)
				{
					max = arr[i];
					max_sub = i;
				}
			
			if(arr[i] < min)
				{
					min = arr[i];
					min_sub = i;
				}
		}
	
	free(arr);
	arr = NULL;

	printf("the position of min is : %d\nthe min number is : %d\nthe position of max is : %d\nthe max number is : %d\n",
			min_sub, min, max_sub, max);
	
	return 0;
}
