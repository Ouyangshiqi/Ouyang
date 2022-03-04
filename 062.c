#include <stdio.h>

int main()
{
	char c1, c2;
	printf("输入一个小写字母\n");
	c1 = getchar();
	c2 = c1 - 32;
	printf("转换后的字母为：%c,%d\n", c2, c2);
	return 0;
}
