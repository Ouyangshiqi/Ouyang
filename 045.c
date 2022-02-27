#include <stdio.h>

//10000以内的自守数
int main()
{
	int i, j , n;
	printf("结果是： ");
	for(i=0; i<10000; i++)
		{
			n = i*i;
			j = 10;
			while(1)
				{
					if(n%j == i)
						{
							printf("%d  ", i);
							break;
						}
					if(n/j == 0)
						{
							break;
						}
					j *= 10;
				}
		}
	printf("\n");
	return 0;
}
