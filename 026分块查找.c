#include <stdio.h>

struct index    //index 索引
{
	int key;
	int start;
	int end;
}index_table[4];

int block_search(int a[], int key)
{
	int i, j;
	i = 1;

	while(i<=3 && key>index_table[i].key)
		{
			i++;
		}
	if(i>3)
		{
			return 0;
		}
	j = index_table[i].start;
	while(j<=index_table[i].end && a[j] != key)
		{
			j++;
		}
	if(j>index_table[i].end)
		{
			j = 0;
		}
	return j;
}

int main()
{
	int i, j=0,k,key,a[16];
	printf("请输入15个数：\n");

	for(i=1;i<16;i++)
		{
			scanf("%d",&a[i]);
		}
	for(i=1;i<=3;i++)
		{
			index_table[i].start = j+1;
			j = j+1;
			index_table[i].end = j+4;
			j = j+4;
			index_table[i].key = a[j];
		}
	printf("请输入你要查找的数:\n");
	scanf("%d",&key);
	k = block_search(a,key);
	if(k != 0)
		{
			printf("查找成功，其位置是：%d\n",k);
		}
	else
		{
			printf("查找失败，没有该数字");
		}
	return 0;
}
