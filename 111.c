#include <stdio.h>

void del_str(char* ch, int pos, int len)
{
	int i = 0;
	while(ch[pos-1])
		{
			ch[pos-1] = ch[pos+len-1];
			pos++;
		}
}


//删除字符串中的连续字符
int main()
{
	char ch[100] = {0};
	int pos = 0;
	int len = 0;

	printf("Please input string:\n");
	scanf("%s", ch);
	printf("Please input delete position:\n");
	scanf("%d", &pos);
	printf("Please input delete length:\n");
	scanf("%d", &len);

	del_str(ch, pos, len);
	printf("%s\n", ch);
	
	return 0;
}
