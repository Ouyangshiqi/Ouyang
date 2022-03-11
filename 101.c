#include <stdio.h>
#include <stdlib.h>

//选票统计
int main()
{
	int * arr = NULL;
	int condidate[4] = {0};
	int n = 0;
	int i = 0;
	
	printf("please input the number of electorate:\n");
	scanf("%d", &n);
	
	arr = (int *)malloc(n*sizeof(int));//动态开辟一个满足要求的内存空间
	if(arr == NULL)//判断空间是否开辟成功
		{
			return 0;
		}
	
	printf("please input 1 or 2 or 3:\n");
	for(i = 0; i < n; i++)//输入票型并统计
		{
			scanf("%d", arr+i);
			if(arr[i] == 1)
				{
					condidate[1]++;
				}
			else if(arr[i] == 2)
				{
					condidate[2]++;
				}
			else if(arr[i] == 3)
				{
					condidate[3]++;
				}
			else
				{
					condidate[0]++;
				}
		}
	
	free(arr);//释放开辟的内存空间并将该指针指向空指针
	arr = NULL;
	
	printf("condidate1: %d\ncondidate2: %d\ncondidate3: %d\nonuser:%d\n",
		condidate[1], condidate[2], condidate[3], condidate[0]);
	return 0;
}
