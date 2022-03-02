#include <stdio.h>
#include <math.h>



//求一元二次方程的实根
int main()
{
	double a, b, c;
	double m;
	double x1, x2;
	printf("请输入一元二次方程的系数a b c ：");
	scanf("%lf%lf%lf", &a, &b, &c);

	m = b*b - 4*a*c;

	if(m<0)
		{
			printf("次方程无解\n");
		}
	else if(0 == m)
		{
			printf("x1 = x2 = %lf\n", -b);
		}
	else
		{
			x1 = (-b + sqrt(m))/(2*a);
			x2 = (-b - sqrt(m))/(2*a);

			printf("x1 = %lf\t x2 = %lf\n", x1, x2);
		}
	return 0;
}
