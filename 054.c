#include <stdio.h>


//求自然对数e的值
int main()
{
	int i;
	int left, right;
	for(i = 1000; i < 10000; i++)
		{
			left = i / 100;
			right = i % 100;
			if(i == (left + right) * (left + right))
				{
					printf("%d\n", i);
				}
		}
	return 0;
}
