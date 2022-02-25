#include <stdio.h>

//老师分糖果
int main()
{
	int n;
	float num1, num2;
	for(n=11;;n++)
		{
			num1 = 1 + (n-1)*1.0/10;
			num2 = 2 + (n-2-num1)*1.0/10;
			if(num1 != (int)num1 || num2 !=(int)num2)
				{
					continue;
				}
			if(num1 == num2)
				{
					break;
				}
		}
	printf("共有%d个学生，糖果总共分成了%d份\n", n/(int)num1, n);
	return 0;
}
