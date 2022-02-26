#include "game.h"


void game()
{
	char ret;
	char a[ROW][COL] = {0}; // 定义棋盘大小
	Iniboard(a, ROW, COL);	// 初始化棋盘
	Outboard(a, ROW, COL);	// 输出棋盘
	while(1)
		{
			playmove(a, ROW, COL);			// 玩家下棋
			Outboard(a, ROW, COL);			// 输出棋盘
			ret = Result(a, ROW, COL);		// 判断是否胜出：返回 * 玩家胜利，返回 # 电脑胜利， 返回 d 平局， 返回 c 游戏继续
			if(ret == '*')
				{
					printf("Players win !!!\n\n\n");
					break;
				}
			else if(ret =='#')
				{
					printf("Computer win !!!\n\n\n");
					break;
				}
			else if(ret == 'd')
				{
					printf("Deuce !!!\n\n\n");
					break;
				}
			computermove(a, ROW, COL);		// 电脑下棋
			Outboard(a, ROW, COL);			// 输出棋盘
			ret = Result(a, ROW, COL);		// 判断是否胜出：返回 * 玩家胜利，返回 # 电脑胜利， 返回 d 平局， 返回 c 游戏继续
						if(ret == '*')
				{
					printf("Players win !!!\n\n\n");
					break;
				}
			else if(ret =='#')
				{
					printf("Computer win !!!\n\n\n");
					break;
				}
			else if(ret == 'd')
				{
					printf("Deuce !!!\n\n\n");
					break;
				}
		}
}
int main()
{
	int n;
	titlle();  	//输出封面
	while(1)
		{
			printf("pleace input 0 or 1  >> ");
			scanf("%d",&n);
			while(getchar() != '\n');
			if(n == 0)
				{
					printf("quit game!\n");	// 输入0 退出游戏
					break;
				}
			else if(n == 1)
				{
					printf("start game!\n");// 输入1 开始游戏
					game();	// 进入游戏
					titlle();
				}
			else
				{
					printf("intput error!\n");//非1非0重新输入
				}
		}
	return 0;
}
