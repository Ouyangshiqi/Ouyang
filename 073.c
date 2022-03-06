#include <stdio.h>

int main()
{
	float saleroom = 0;
	float salary = 500;
	int com = 0;
	
	printf("输入员工这个月的销售额：");
	scanf("%f", &saleroom);

	com = (int)saleroom/1000;
	switch(com)
		{
			case 0:
			case 1:
				break;
			case 2:
				if((int)saleroom % 1000 == 0 && com == 2 || com < 2)
					{
						break;
					}
			case 3:
			case 4:
			case 5:
				if((int)saleroom % 1000 == 0 && com == 5 || com < 5)
					{
						salary += saleroom * 0.08;
						break;
					}
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
				if((int)saleroom % 1000 == 0 && com == 10 || com < 10)
					{
						salary += saleroom * 0.1;
						break;
					}
			default :
						salary += saleroom * 0.12;
						break;

		}

			printf("员工这个月工资为：%.2f\n", salary);

	return 0;
}
