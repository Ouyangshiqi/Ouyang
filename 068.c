#include <stdio.h>

int main()
{
	int num;
	printf("输入一个整数：\n");
	scanf("%d", &num);
	if(num % 2 == 0)
		{
			printf("%d 是偶数\n", num);
		}
	
	return 0;
}
