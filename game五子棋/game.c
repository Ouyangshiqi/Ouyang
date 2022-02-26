#include "game.h"


//输出游戏封面
void titlle()
{
	int i, j, n;
	char a[] = "  input 1 start game | input 0 quit game  ";
	n = strlen(a);
	for(j=0;j<3;j++)
		{
			for(i=0;i<N;i++)
				{
					if(j==1 && i>=(N-n)/2 && i<(N-n)/2+n)
						{
							printf("%c",a[i-(N-n)/2]);
						}
					else
						{
							putchar('#');
						}
				}
			putchar('\n');
		}
}

//初始化棋盘
void Iniboard( char a[ROW][COL], int row, int col)
{
	int i, j;
	for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
				{
					a[i][j] = ' ';
				}
		}
}


//打印棋盘
void Outboard(char a[ROW][COL], int row, int col)
{
	int i, j;
	for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
				{
					printf(" %c ", a[i][j]);
					if(j<col-1)
						{
							putchar('|');
						}
				}
			putchar('\n');
			if(i<row-1)
				{
					for(j=0;j<col;j++)
						{
							printf("---");
							if(j<col-1)
								{
									putchar('|');
								}
						}		
				}
			putchar('\n');
		}
}


//玩家下棋
void playmove(char a[ROW][COL], int row, int col)
{
	int x, y;
	while(1)
		{
			printf("player play chess (x,y) >> ");
			scanf("%d%d", &x, &y);
			while(getchar() != '\n');
			if(x>0 && x<=row && y>0 && y<=col)
				{
					if(a[x-1][y-1] == ' ')
						{
							a[x-1][y-1] = '*';
							break;
						}
					else
						{
							printf("There are already chess pieces in this position !\n");
						}
				}
			else
				{
					printf("Wrong coordinates !\n");
				}
		}
	
	
}



void computermove(char a[ROW][COL], int row, int col)
{
	int x, y;
	while(1)
		{
			srand(time(0));
			x = rand() % 3;
			y = rand() % 3;
			if(a[x][y] == ' ')
				{
					a[x][y] = '#';
					break;
				}
		}
}


// 判断是否胜出：返回 * 玩家胜利，返回 # 电脑胜利， 返回 d 平局， 返回 c 游戏继续
char Result(char a[ROW][COL], int row, int col)\
{
	int i, j, k, h;
	int flag = 0;

	for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
				{
					if(a[i][j] == ' ') // 判断棋盘是否已满
						{
							flag = 1;
						}
					if(a[i][j] != ' ')
						{							
							//判断行是否满足赢的条件
							if(j+M<=col)
								{
									for(k=j+1;k<j+M;k++)
										{
											if(a[i][j] != a[i][k])
												{
													break;
												}
										}
									if(k == j+M)
										{
											return a[i][j];
										}
								}									

							//判断列是否满足赢的条件
							if(i+M<=row)
								{
									for(k=i+1;k<i+M;k++)
										{
											if(a[i][j] != a[k][j])
												{
													break;
												}
										}
									if(k == i+M)
										{
											return a[i][j];
										}
								}

							//判断正对角线是否满足赢的条件
							if(j+M<=col && i+M <=row)
								{
									for(k=i+1, h=j+1;k<i+M && h<j+M;k++,h++)
										{
											if(a[i][j] != a[k][h])
												{
													break;
												}
										}
									if(k == i+M)
										{
											return a[i][j];
										}
								}

							//判断反对角线是否满足赢的条件
							if(i-M>-1)
								{
									for(k=i-1;k>i-M;k--)
										{
											if(a[i][j] != a[k][k])
												{
													break;
												}
										}
									if(k == i+M)
										{
											return a[i][j];
										}
								}
						}
				}
		}
	if(flag)
		{
			return 'c';
		}
	else
		{
			return 'd';
		}
	}






