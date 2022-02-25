#include <stdio.h>
#include <time.h>
#define MAX 11
#define N 8

int hashtable[MAX];

int func(int value)
{
	return value%MAX;
}

int search(int  key)
{
	int pos, t;
	pos = func(key);
	t = pos;
	while(hashtable[t] != key && hashtable[t] != -1)
		{
			t = (t+1)%MAX;
			if(pos == t)
				{
					return -1;
				}
		}
	if(hashtable[t] == -1)
		{
			return NULL;
		}
	else
		{

			return t;
		}
		
}

void creathash(int key)
{
	int pos, t;
	pos = func(key);
	t = pos;
	while(hashtable[t] != -1)
		{
			t = (t+1)%MAX;
			if(pos == t)
				{
					printf("哈希表已满\n");
					return ;
				}
		}
	hashtable[t] = key;
}


int main()
{
	int flag[50];
	int i, j, t;
	for(i=0;i<MAX;i++)
		{
			hashtable[i] = -1;
		}
	for(i=0;i<50;i++)
		{
			flag[i] = 0;
		}
	srand((unsigned long)time(0));
	i = 0;
	while(i != N)
		{
			t = rand()%50;
			if(flag[t] == 0)
				{
					creathash(t);
					printf("%2d:",t);
					for(j=0;j<MAX;j++)
						{
							printf("(%2d)",hashtable[j]);
						}
					printf(
"\n");
					flag[t] = 1;
					i++;
				}
		}
	printf("请输入你想要查找的数：");
	scanf("%d",&t);
	if(t>0 && t <50)
		{
			i = search(t);
			if(i != -1)
				{
					printf("查找成功！其位置是: %d\n",i);
				}
			else
				{
					printf("查找失败！\n");
				}
		}
	else
		{
			printf(
"输入有误！\n");
		}
	return 0;
}
