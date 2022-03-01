#include <stdio.h>

//判断是否为闰年, 是闰年返回 : 1  不是闰年返回 : 0
int leap_year(int year)
{
	if(year%400 == 0 || year%4 == 0 && year%100 != 0)
		{
			return 1;
		}
	return 0;
}



int main()
{
	int year;
	printf("输入年份：");
	scanf("%d", &year);
	if(leap_year(year) == 1)
		{
			printf("%d 年是闰年\n", year);
		}
	else
		{
			printf("%d 年不是闰年\n", year);
		}
	return 0;
}
