#include <stdio.h>

//银行存款问题
int main()
{
	float x = 0;
	int i = 5;
	
	while(i--)
		{
			x += 1000;	//每年包括利息的所有钱
			x = x / 1.025;		//减去利息后的本金			
		}
	printf("%.2f\n", x);
	return 0;
}
