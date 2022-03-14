/*************************************************************************
	> File Name: 136.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月14日 星期一 11时05分25秒
 ************************************************************************/

#include<stdio.h>

//大写字母转小写函数
void strlwr(char *arr)
{
	while (*arr)
	{
		if (*arr > 'A' && *arr < 'Z')
		{
			*arr += 32;
		}

		arr++;
	}
}

//任意大写字母转小写
int main()
{
	char arr[100] = {0};

	printf("please input string:\n");
	scanf("%s", arr);

	strlwr(arr);

	printf("%s\n", arr);

	return 0;
}
