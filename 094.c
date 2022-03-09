#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//游戏菜单
void menu()
{
	printf("\t1.start game\n\n");
	printf("\t2.exit game\n");
	printf("\n\n\n\n\t\t\tplease choose:");
}


//猜数字游戏
void game()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int A = 0;
	int B = 0;
	int flag = 1;
	srand(time(0));
	
	printf("输入你要猜的数是几位数：>");
	scanf("%d", &n);
	int arr[n];
	int guess[n];
	
	//产生符合条件的随机数
	while(flag)
		{
			flag = 0;
			for(i = 0; i < n; i++)
				{
					arr[i] = rand()%10;
					if(arr[0] == 0)//第一位为0时重新随机
						{
							flag = 1;
						}
				}
			//有相同数的时候重新随机
			for(i = 0; i < n-1; i++)
				{
					for(j = i+1; j < n; j++)
						{
							if(arr[i] == arr[j])
								{
									flag = 1;
								}
						}
				}
		}
//	for(i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	putchar('\n');
	
	//判断是否猜对，并给出提示
	while(A != n)
		{
			printf("guess : ");
			A = 0;
			B = 0;
			for(i = 0; i < n; i++)
				{
					scanf("%d", &guess[i]);//获取输入的数
					if(guess[i] == arr[i])// 计算位置相同且数字相同的个数
						{
							A++;
						}
					else
						{
							for(j = 0; j < n; j++) // 计算位置不同但是数字相同的数
								{
									if(arr[j] == guess[i])
										{
											B++;
											break;
										}
								}
						}
				}
			//打印提示
			printf("clue on :%d A %d B\n", A, B);
		}
	//给出结果
	printf("you are clever!!\n");
}

int main()
{
	int input = 0;
	do
		{
			menu();//打印游戏菜单
			scanf("%d", &input);// 选择模式
			if(input == 1)
				{
					game();
				}
			else if(input == 2)
				{
					printf("退出游戏\n");
				}
			else
				{
					printf("选择错误\n");
				}
			
			
		}
	while(input != 2);
	return 0;
}
