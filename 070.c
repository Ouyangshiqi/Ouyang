#include <stdio.h>

int main()
{
	char ch;
	printf("输入一个字符：\n");
	ch = getchar();
	
	if(ch >= 48 && ch <= 57)
		{
			printf("输入的字符的数字\n");
		}
	else if(ch >=65 && ch <= 90)
		{
			printf("输入的字符是大写字母\n");
		}
	else if(ch >= 97 && ch <= 122)
		{
			printf("输入的字符是小写字母\n");
		}
	else
		{
			printf("输入的字符是特殊字符\n");
		}
	return 0;
}
