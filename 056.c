#include <stdio.h>

int main()
{
	int num;
	printf("请输入一个整数：");
	scanf("%d", &num);
	if(num % 5 == 0 && num % 7 == 0)
		{
			printf("yes\n");
		}
	else
		{
			printf("no\n");
		}
	return 0;
}
