/*************************************************************************
	> File Name: 244.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月17日 星期四 20时31分28秒
 ************************************************************************/

#include<stdio.h>

//删除文件
int main()
{
	char fname[100] = {0};

	printf("Please input the file's name which do want to delete:\n");
	scanf("%s", fname);

	if (remove(fname) == 0)
	{
		printf("Removed successful!\n");
	}
	else
	{
		perror("remove");
	}

	return 0;
}
