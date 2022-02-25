#include <stdio.h>
#include <string.h>

//strupr() 将字符串中的小写字母转换成大写字母
int n_ten(char a[], int n)
{
	int m = strlen(a)-1;
	int num = 0;
	int i, j, h = 1;


	for(i=m; i>=0; i--)
		{
			for(j=m, h=1; j>i; j--)
				{
					h *= n;  
				}
			if(a[i]<='f' && a[i]>='a')
				{
					a[i] -= 34;
				}
			if(a[i]<='F' && a[i]>='A')
				{
					a[i] -= 2;
				}
			num += (a[i]-48) * h;
		}
	return num;
}

int main()
{
	char a[100] = {0};
	int n, num;
	
	printf("请输入数字：");
	scanf("%s", a);
	printf("请输入进制m(2 或者 8 或者 16)：");
	scanf("%d",&n);
	
	num = n_ten(a,n);
	printf("十进制形式是 %d\n", num);
	return 0;
}
