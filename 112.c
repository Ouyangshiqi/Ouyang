/*************************************************************************
	> File Name: 112.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月13日 星期日 10时00分58秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	char ch[100] = {0};
	int letter = 0;
	int digit = 0;
	int space = 0;
	int other = 0;
	int i = 0;

	printf("please input some characters:\n");
	fgets(ch, 100, stdin);

	while (ch[i] != '\n')
	{
			if (ch[i] == ' ')
			{
				space++;
			}
			else if (ch[i] > '0' && ch[i] <= '9')
			{
				digit++;
			}
			else if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >='A' && ch[i] <= 'Z'))
			{
				letter++;
			}
			else
			{
				other++;
			}
			i++;
	}

	printf("letter = %d  space = %d  digit = %d  other = %d\n", letter, space, digit, other);
	return 0;
}
