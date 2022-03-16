/*************************************************************************
	> File Name: 227.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2022年03月16日 星期三 20时17分57秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct commodity
{
	int NO;
	char MAME[20];
	int NUM;
	float PRICE;
};

//商品信息的动态存放
int main()
{
	struct commodity *apple = (struct commodity *)calloc(1, sizeof(struct commodity));
	if (apple == NULL)
	{
		perror("calloc apple");
	}

	apple->NO = 1001;
	strcpy(apple->MAME,  "苹果");
	apple->NUM = 100;
	apple->PRICE = 2.1;

	printf("编号 = %d\n名称 = %s\n数量 = %d\n价格 = %.2f\n",
			apple->NO, apple->MAME, apple->NUM, apple->PRICE);

	free(apple);
	apple = NULL;

	return 0;
}
