#include <stdio.h>

int main()
{
	float money;
	int x;
	char y, z;
	printf("请输入你要加油的量(单位为千克), 汽油的品种(a,b,c三种), 和服务的类型(自己加：d, 协助加：e):\n");
	scanf("%d %c %c", &x, &y, &z);
	switch(y)
		{
			case 'a':
				money = x * 3.25 - x * 3.25 * 0.05 * (z - 'c');
				break;
			case 'b':
				money = x * 3.00 - x * 3.00 * 0.05 * (z - 'c');
				break;
			case 'c':
				money = x * 2.75 - x * 2.75 * 0.05 * (z - 'c');
				break;
			default :
				break;
		}
	printf("加油量是：%d\n汽油的种类是：%c\n服务的等级是：%c\n用户应付的金额是：%.2f\n", x, y, z, money);
	return 0;
}
