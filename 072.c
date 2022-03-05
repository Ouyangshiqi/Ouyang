#include <stdio.h>

//打印菜单
void menu()
{
	printf("********************************\n");
	printf("**       可选择的按键：       **\n");
	printf("**       1. 巧克力            **\n");
	printf("**       2. 蛋糕              **\n");
	printf("**  	 3. 可口可乐          **\n");
	printf("********************************\n");
		
}

int main()
{
	menu();
	int n;
	printf("从1~3中选择按键：\n");
	scanf("%d", &n);
	switch(n)
		{
			case 1:
				printf("你选择了巧克力\n");
				break;
			case 2:
				printf("你选择了蛋糕\n");
				break;
			case 3:
				printf("你选择了可口可乐\n");
				break;
			default :
				printf("选择错误\n");
				
		}
	return 0;
}
