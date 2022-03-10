#include <stdio.h>
#include <assert.h>
//模拟实现strcpy函数
char * my_strcpy(char * dest, const char * src)
{
	assert(dest && src);//接收的指针不能是空指针
	int i = 0;
	
	while(dest[i++] = src[i]);
	
	return dest;	
}


int main()
{
	char arr1[100] = {0};
	char arr2[100] = {0};
	
	printf("请输入字符串1:\n");
	scanf("%s", arr1);

	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}
