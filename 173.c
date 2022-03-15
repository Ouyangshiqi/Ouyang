/*************************************************************************
	> File Name: 173.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月15日 星期二 14时19分37秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>


//从键盘上获取字符串
void gets(char *str)
{
	while ((*(str++) = getchar()) != '\n');
	*(--str) = '\0';
}

//将两个字符串拼接
char * my_strcat(char *fir, char * sec, char * dest)
{
	int n = strlen(fir);
	strcpy(dest, fir);
	strcpy(dest+n, sec);

	return dest;
}

//使用指针连接两个字符串
int main()
{
	char str1[20] = {0};
	char str2[20] = {0};
	char str3[40] = {0};

	printf("The first string is : ");
	gets(str1);
	printf("%s\n",str1);
	printf("The secind string is : ");
	gets(str2);

	my_strcat(str1, str2, str3);

	printf("The connected string is : \n%s\n", str3);

	return 0;
}
