#include <stdio.h>


//数据逆序
void Reverse(int * arr, int n)
{
	int i = 0;
	int temp = 0;
	while(i < n)
		{
			temp = arr[i];
			arr[i] = arr[n-1];
			arr[n-1] = temp;
			i++;
			n--;
		}
}

int main()
{
	int arr[100] = {0};
	int i = 0;
	int flag = 0;
	while(1)
		{
			scanf("%d", &arr[i++]);
			if(getchar() == '\n')
				{
					flag = i;
					break;
				}
		}
	Reverse(arr, i);
	for(i = 0; i < flag; i++)
		{
			printf("%d ", arr[i]);
		}
	printf("\n");
	return 0;
}
