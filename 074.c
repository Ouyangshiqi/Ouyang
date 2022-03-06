#include <stdio.h>

int main()
{
	int a, b;
	int save = 0;
	printf("请输入a和b:\n");
	scanf("%d%d", &a, &b);
	save = a*a + b*b;
	if(save > 100)
		{
			printf("a ^ 2 + b ^ 2 = %d\n", save);
		}
	else
		{
			printf("a + b = %d\n", a+b);
		}
	return 0;
}
