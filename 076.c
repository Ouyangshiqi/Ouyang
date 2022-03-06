#include <stdio.h>

int main()
{
	double a, b;
	char c;
	double result = 0;
	printf("请输入运算格式，a(+,-,*,/)b,例：4+5\n");
	scanf("%lf%c%lf", &a, &c, &b);
	switch(c)
		{
			case '+':
				result = a + b;
				break;
			case '-':
				result = a - b;
				break;
			case '*':
				result = a * b;
				break;
			case '/':
				if(b != 0)
					{
						result = a / b;
					}
				else
					{
						c = 'e';
						printf("分母不能为0\n");
					}
				break;
			default :
				c = 'e';
				printf("输入错误\n");
				break;
		}
	if(c != 'e')
		{
			printf("%lf\n", result);
		}
	return 0;
}
