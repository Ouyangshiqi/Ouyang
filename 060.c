#include <stdio.h>
#include <conio.h>

int main()
{
	char ch1, ch2, ch3;
	printf("输入一个字符，使用getche函数接收\n");
	ch1 = getche();
	printf("\n");
	printf("请输入一个字符，使用getch函数接收\n");
	ch2 = getch();
	printf("\n");
	printf("请输入一个字符，使用getchar函数接收\n");
	ch3 = getchar();
	printf("\n输入的这三个字符是：\n");
	//输出字符
	putchar(ch1);
	putchar(ch2);
	putchar(ch2);
	printf("\n");
	return 0;
}
