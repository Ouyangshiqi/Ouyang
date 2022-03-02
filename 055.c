#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int a, b, c, sign, max;
	char  sign1;
	printf("请输入运算符 (1 or other, 1:-, other:+): \n");
	scanf("%d",&sign);
	printf("请输入最大的数 (<10000): \n");
	scanf("%d", &max);
	srand((unsigned long)time(0));
	a = rand() % max;
	b = rand() % max;
	while((a<b) && (sign == 1))
		{
			a = rand() % max;
			b = rand() % max;
		}
	sign1 = (sign == 1 ? '-' : '+');
	printf("\n%d %c %d = ", a, sign1, b);
	scanf("%d", &c);
	if((sign == 1) && (a-b == c) || (sign != 1) && (a+b == c))
		{
			printf("计算正确\n");
		}
	else
		{
			printf("计算错误\n");
		}
	return 0;
}


//int main()
//{
//	srand((unsigned long)time(0));
//	int num1, num2;
//	int t, max;
//	int answer;
//	
//	printf("请选择运算符< 输入 1 为 + ；输入 0 为 - ：\n");
//	scanf("%d", &t);
//	printf("请选择最大的数(<10000) :\n");
//	scanf("%d", &max);
//	
//	num1 = rand() % max + 1;
//	num2 = rand() % max + 1;
//	
//	if(1 == t)
//		{
//			printf("%d + %d = ", num1, num2);
//			scanf("%d", &answer);
//			if(answer == num1 + num2)
//				{
//					printf("计算正确\n");
//				}
//			else
//				{
//					printf("计算错误\n");
//				}
//		}
//	else
//		{
//			printf("%d - %d = ", num1, num2);
//			scanf("%d", &answer);
//			if(answer == num1 - num2)
//				{
//					printf("计算正确\n");
//				}
//			else
//				{
//					printf("计算错误\n");
//				}
//		}
//
//
//}
