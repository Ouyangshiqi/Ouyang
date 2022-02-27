#include "game.h"


//初始化棋盘
void Initboard(char board[ROWS][COLS], int row, int col, char set)
{
	int i, j;

	for(i = 0; i < row; i++)
		{
			for(j = 0; j < col; j++)
				{
					board[i][j] = set;
				}
		}
}



//显示棋盘
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	for(i = 0; i <= row; i++)	//输出上面的行号
		{
			printf("%d ",i);
		}
	printf("\n");
	for(i = 1; i <= row; i++)
		{
			printf("%d ",i);	//输出左边的列号
			for(j = 1; j <= col; j++)
				{
					printf("%c ", board[i][j]);
				}
			printf("\n");
		}

	printf("\n");
}


//放置雷
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int x, y, i;
	i = MINE;
	
	while(i)
		{
			x = rand() % row +1;
			y = rand() % col +1;
			if(board[x][y] == '0')
				{
					board[x][y] = '1';
					i--;
				}
		}
	
}	




//判断以这个坐标为中心的九格里有几个雷
int Countmine(char board[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int i, j;
	int n = 0;
	

					if(x < 1 || x > ROW || y < 1 || y > COL)
						{
							return 0;
						}
					for(i = x-1; i <= x+1; i++)
						{
							for(j = y-1; j <= y+1; j++)
								{
												n += board[i][j] - '0';
								}
						}
					if(n != 0)
						{
							show[x][y] = n + '0';
							return 0;
						}
					else
						{
							show[x][y] = ' ';
							return 1;
						}


}

int s = 0;
//统计雷的数量，如果九格都没有雷就判断除了中心坐标的其他八个的周围是否有雷，反复执行
void Nullmine(char board[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int i, j, k, h;

	if(Countmine(board, show, x, y) == 1 )
		{
			for(k = x-1; k < x+2; k++)
				{
					for(h = y-1; h < y+2; h++)
						{
							if((k == x && h == y) || show[k][h] != '*')
								{
									continue;
								}
							if(k < 1 || k > ROW || h < 1 || h > COL)
								{
									continue;
								}

							if(Countmine(board, show, k, h) == 1)
								{
											Nullmine(board, show, k, h);
								}
						}
				}
		}
}


//判断是否通过游戏
int Win(char show[][COLS], int row, int col)
{
	int i, j;
	int count = 0;
	
	for(i = 1; i <= row; i++)
		{
			for(j = 1; j <= col; j++)
				{
					if(show[i][j] == '*')
						{
							count++;
						}
				}
		}
	if(count == MINE)
		{
			return 1;
		}
	return 2;
}




//扫雷
int Findmine(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	while(1)		//确保输入坐标的正确
		{
			printf("请输入你要扫描的坐标 >> ");
			scanf("%d%d", &x, &y);
			while(getchar() != '\n');
			if(x > 0 && x <= ROW && y > 0 && y <= COL)
				{
					if(show[x][y] == '*')
						{
							break;
						}
					else
						{
							printf("你输入的坐标已被扫描，请重新输入\n");
							continue;
						}

				}
			else
				{
					printf("你输入的坐标非法，请重新输入\n");
					continue;
				}

		}
	
	if(board[x][y] == '1')
		{

			return 0;
		}

	//计算雷的数量
	Nullmine(board, show, x, y);
	
	//判断是否通过游戏
	if(Win(show, ROW, COL) == 1)
		{
			
			return 1;
		}

}







