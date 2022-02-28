#include <stdio.h>
#include <stdlib.h>

////求最大公约数
//int com_max(int a, int b)
//{
//	while(1)
//		{
//			if(a>b)
//				{
//					a = a%b;
//				}
//			else
//				{
//					b = b%a;
//				}
//			if(a == 0 || b == 0)
//				{
//					return a>b ? a : b;
//				}
//		}
//}
//
//
//void result(int a, int b, int c, int * x, int * y)
//{
//	int i, j;
//	for(i=-100; i<100; i++)
//		{
//			for(j=-10; j<30; j++)
//				{
//					if(a*i+b*j == c)
//						{
//							*x = i;
//							*y = j;
//							return ;
//						}
//				}
//		}
//}
//
////求二元一次不定方程
//int main()
//{
//	int a, b, c, x =  0, y = 0;
//	printf("Input a, b, c: ");
//	scanf("%d%d%d", &a, &b, &c);
//	result(a, b, c, &x, &y);
//	//c = com_max(a, b);
//	printf("x = %d  y = %d\n", x, y);
//	return 0;
//}

//用来求解二元一次不定方程的一组解
void result(int a, int b, int c, int* x1, int* y1)
{
	int x[100], y[100],z[100];
	int i, j, d, t, gcd;

	x[0] = 0;
	y[0] = 1;
	for(i=0; i<100; i++)
		{
			z[i] = a/b;
			d = a%b;
			a = b;
			b = d;
			if(d == 0)
				{
					gcd = a;
					break;
				}
			if(i == 0)
				{
					x[1] = 1;
					y[1] = z[0];
				}
			else
				{
					x[i+1] = z[i] * x[i] + x[i-1];
					y[i+1] = z[i] * y[i] + y[i-1];
				}
		}
	for(t=-1, j=i; j<i; j++)
		{
			t = -t;
		}
	*x1 = -t * x[i];
	*y1 = t * y[i];
	if(c%gcd != 0)
		{
			printf("无解！\n");
			exit(0);
		}
	t = c/gcd;
	*x1 = *x1 * t;
	*y1 = *y1 * t;
		
}

//用来检测求出来的解是否满足方程
void test(int a, int b, int c, int x, int y)
{
	if(a*x + b*y == c)
		{
			printf("结果正常\n");
		}
	else
		{
			printf("结果错误\n");
		}
}


int main()
{
	int a, b, c, x=0, y=0;
	printf("输入 a,b,c: \n");
	scanf("%d%d%d", &a, &b, &c);
	result(a, b, c, &x, &y);
	test(a, b, c, x, y);
	printf("x = %d, y = %d\n", x, y);
	return 0;
}

