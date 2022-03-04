#include <stdio.h>

int main()
{
	float grade1, grade2, grade3, sum, average;
	printf("请输入三个成绩：\n");
	scanf("%f%f%f", &grade1, &grade2, &grade3);
	sum = grade1 + grade2 + grade3;
	average = sum / 3;
	printf("总成绩 = %.2f   平均成绩 = %.2f\n", sum, average);
	return 0;
}
