#include <stdio.h>

int main()
{
	int ch;
	printf("请输入字符\n");
	ch = getchar();
	printf("字符 - %c %d\t前驱字符 - %c  %d\n", ch, ch, ch-1, ch-1);
	return 0;
}
