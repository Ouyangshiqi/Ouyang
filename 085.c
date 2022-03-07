#include <stdio.h>

//求总数问题
int main()
{
	int i;
	int flag = 0;
	int A, B, C;
	for(i = 303;; i++)
		{
			A = i * 0.2;
			if(A != i*0.2)
				{
					continue;
				}
			for(int j = 1; j < 7; j++)
				{
					B = i / 7.0 * j;
					C = 303;
					if(B == i / 7.0 * j && A+B+C == i)
						{
							flag = 1;
							break;
						}
					else
						{
							continue;
						}
					
				}
			if(flag == 1)
				{
					break;
				}
		}
	printf("tetal is %d\nA:%d\nB:%d\nC:%d\n", i, A, B, C);
	return 0;
}
