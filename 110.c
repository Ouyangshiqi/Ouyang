#include <stdio.h>

void insert(char ch, char * arr, int n)
{
	char * p = arr;
	while(*p)
		{
			p++;
		}
	while(p != arr+2)
		{
			*(p+1) = *p;
			p--;
		}
	*(arr+3) = ch;
}


//在指定位置插入字符
int main()
{
	char arr[100] = {0};
	char ch = 0;
	int n = 0;
	
	printf("please input str1:\n");
	scanf("%s", arr);
	getchar();
	printf("please input a char:\n");
	scanf("%c", &ch);
	printf("please input position:\n");
	scanf("%d", &n);

	insert(ch, arr, n);
	printf("%s\n", arr);
	return 0;
}
