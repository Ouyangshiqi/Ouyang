#include <stdio.h>

int  main()
{
	double a, b, c, d, n, day;
	d = 1;
	n = 5;
	a = n/3;
	b = n/1;
	c = n/4;
	day = n/(a+b+c+d);
	printf("需要 %f 天！\n", day);
	return 0;
}
