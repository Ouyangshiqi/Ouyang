#include <stdio.h>

//菜单
void menu()
{
	printf("----------Menu----------\n");
	printf("------Sell------------1\n");
	printf("------Buy-------------2\n");
	printf("------Showproduct-----3\n");
	printf("------Out-------------0\n");
}
int main()
{
	int n;
	while(n)
		{
			menu();
			scanf("%d", &n);
			switch(n)
				{
					case 1:
						printf("you are buying something into store\n");
						break;
					case 2:
						printf("you are selling to consumer\n");
						break;
					case 3:
						printf("checking the store\n");
						break;
					case 0:
						printf("the Program is out\n");
						break;
					default :
						printf("You put a wrong selection\n");
						break;
				}			
		}
	return 0;
}
