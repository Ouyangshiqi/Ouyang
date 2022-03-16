/*************************************************************************
	> File Name: 223.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 19时29分24秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct a
{
	int inte;
	struct a *p;
};

//使用malloc()函数分配内存
int main()
{
	struct a *b = NULL;

	b = (struct a *)malloc(sizeof(struct a));
	if (b == NULL)
	{
		perror("malloc b");
		return 0;
	}

	b->inte = 5;
	b->p = NULL;	

	printf("b->inte = %d\tb->p = %p\n", b->inte, b->p);

	free(b);
	b = NULL;
	return 0;
}
