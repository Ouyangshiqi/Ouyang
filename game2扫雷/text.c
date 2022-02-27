#include "game.h"
void Menu()
{
	printf("##########################################\n");
	printf("#########  input : 1 start game  #########\n");
	printf("#########  input : 0 exit  game  #########\n");
	printf("##########################################\n");
}

void game()
{
	char board[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	//初始化棋盘
	Initboard(board, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS , '*');
	//放置雷
	Setmine(board, ROW, COL);
	while(1)
		{
			//显示棋盘
			//Displayboard(board, ROW, COL);
			Displayboard(show, ROW, COL);
			Displayboard(board, ROW, COL);
			//扫雷
			switch(Findmine(board, show, ROW, COL))
				{
					case 0:
						Displayboard(board, ROW, COL);
						printf("很遗憾，你已被炸死，游戏结束！！\n\n\n");
						return ;
						break;
					case 1:
						Displayboard(board, ROW, COL);
						printf("恭喜你，成功通关！！\n\n\n");
						return ;
						break;
				}			


			//Displayboard(show, ROW, COL);
		}
}

void text()
{
	int n;
	srand(time(0));
	do
		{
			Menu();		//输出菜单
			printf("请输入你的选择(1 / 0) >> ");
			scanf("%d",&n);
			switch(n)
				{
					case 1:
						game();
						break;
					case 0:
						printf("退出游戏\n");
						break;
					default :
						printf("输入非法，请重新输入\n");
						break;
				}
		}while(n != 0);
}


int main()
{
	text();
	return 0;
}
