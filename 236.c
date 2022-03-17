/*************************************************************************
	> File Name: 235.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月17日 星期四 11时03分32秒
 ************************************************************************/

#include<stdio.h>
#include<fcntl.h>

int main()
{
	char fname[20] = {0};

	while (1)
	{
		printf("Please input filename:\n");
		scanf("%s", fname);
		
		if ((creat(fname, 0)) > 0)
		{
			printf("this file has created!\n");
			break;
		}
		else
		{
			perror("creat file");
		}
	}
	return 0;
}
