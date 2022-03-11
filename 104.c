#include <stdio.h>


//判断一个数是否在某个数组中
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int num = 0;
	int i = 0;

	printf("Please input the number which you want to find:\n");
	scanf("%d", &num);
	
	for(i = 0; i < 10; i++)
		{
			if(arr[i] == num)
				{
					break;
				}
		}
	
	if(10 == i)
		{
			printf("The number you find isn't in the array\n");
		}
	else
		{
			printf("The number you find is in the array\n");
		}
	
	return 0;
}
