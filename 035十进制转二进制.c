#include <stdio.h>

void ten_two(char a[], int n)
{
	int i = 15, j = 1, num = 0;
	while(n)
		{
			a[i--] = n%2+48;
			j *= 10;
			n /= 2;
		}
}

int main()
{
	int n, i;
	char a[16] = {0};
	scanf("%d",&n);
	ten_two(a, n);
	for(i=0;i<16;i++)
		{
			printf("%c",a[i]);
		}
	putchar('\n');
	return 0;
}

