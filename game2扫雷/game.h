#ifndef __GAME_H__
#define __GAME_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE 10


//初始化棋盘
void Initboard(char board[ROWS][COLS], int row, int col, char set);

//显示棋盘
void Displayboard(char board[ROWS][COLS], int row, int col);

//放置地雷
void Setmine(char board[ROWS][COLS], int row, int col);

//扫雷
int Findmine(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col);

#endif
