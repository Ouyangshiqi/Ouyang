#include <stdio.h>


//统计字符串中有多少个单词
int main()
{
	int i = 0;
	int count = 0;
	char arr[100] = {0};
	do
		{
			scanf("%c", &arr[i]);
			if(arr[i] == ' ')
				{
					count++;
				}
		}
	while(arr[i] != '\n');
	printf("%d\n", ++count);
	return 0;
}
