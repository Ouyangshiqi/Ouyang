/*************************************************************************
	> File Name: 226.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 19时59分20秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p = NULL;
	int i = 0;
	int j = 0;

	p = (int *)calloc(3,sizeof(int [3]));
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			p[i*3+j] = i * 3 + j;
			printf("%-6d", p[i*3+j]);
		}
		printf("\n");
	}

	free(p);
	p = NULL;

	return 0;
}
