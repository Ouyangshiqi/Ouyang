#include <stdio.h>
#include <assert.h>

//计算字符串的长度
int my_strlen(char * arr)
{
	assert(arr);
	if(*arr == '\0') // 当最后遇到\0后停止递归
		{
			return 0;
		}
	return my_strlen(arr+1) + 1;//每次递归地址加一
}

int main()
{
	printf("please input a string:\n");
	char arr[256] = {0};
	scanf("%s", arr);
	
	int ret = my_strlen(arr);
	printf("the string has %d characters.\n", ret);
	return 0;
}
