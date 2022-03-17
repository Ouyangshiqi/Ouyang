/*************************************************************************
	> File Name: 243.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月17日 星期四 20时19分09秒
 ************************************************************************/

#include<stdio.h>

//重命名文件
int main()
{
	char oldname[100] = {0};
	char newname[100] = {0};

	printf("Please enter the old file name : \n");
	scanf("%s", oldname);

	printf("Please enter the new file name : \n");
	scanf("%s", newname);

	if (rename(oldname, newname) == 0)
	{
		printf("modify successfully!\n");
	}
	else
	{
		perror("rename");
	}

	return 0;
}
