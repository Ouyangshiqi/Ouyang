#include <stdio.h>

void binary_search(int a[], int n, int num)
{
	int left = 0;
	int right = n-1;
	int mid;
	while(1)
		{
			mid = (left + right)/2;
			if(left>right)
				{
					printf("没有该数字！\n");
					return ;
				}
			if(a[mid] == num)
				{
					printf("查找成功!\na[%d]->%d\n",mid,num);
					return ;
				}
			if(a[mid]>num)
				{
					right = mid-1;
				}
			else
				{
					left = mid+1;
				}
		}
}

int main()
{
	int n, num;
	int i;	
	
	printf("请输入数组的大小：\n");
	scanf("%d",&n);
	int a[n];
	printf("请输入数组的元素：\n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	while(1)
		{
			printf("请输入要查找的数字：\n");
			scanf("%d",&num);
			binary_search(a,n,num);
		}
}
