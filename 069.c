#include <stdio.h>

int main()
{
	char ch;
	printf("输入一个字母：\n");
	ch = getchar();
	if(ch <= 'Z' && ch >= 'A')
		{
			printf("uppercase-letter\n");
		}
	else
		{
			printf("other leffer!\n");
		}
	return 0;
}
