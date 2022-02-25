#include <stdio.h>

//将32位二进制数转换成IP地址输出
int two_ten(char a[],int start, int end)
{
	int i;
	int n = 1, sum = 0;
	char *p = a;
	p += end;
	for(i=0;i<8;i++)
		{
			sum += (*p-48) * n;
			n *=2;
			p--;
		}
	return sum;
}
int main()
{
	char a[32] = {0};
	int i;
	
	scanf("%s",a);
	for(i=0;i<32;i+=8)
		{
			printf("%d",two_ten(a,i,i+7));
			if(i+7<31)
				{
					putchar('.');
				}
		}
	putchar('\n');
	return 0;
}
