#ifndef __GAME_H__
#define __GAME_H__

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define N 76	//控制标题输出的长度
#define ROW 10	//控制棋盘的行
#define COL 10	//控制棋盘的列
#define M 5		//游戏模式，M是几就是几子棋


//输出游戏封面
void titlle();

//初始化棋盘
void Iniboard(char a[ROW][COL], int row, int col);

//打印棋盘
void Outboard(char a[ROW][COL], int row, int col);

//玩家下棋
void playmove(char a[ROW][COL], int row, int col);

//电脑下棋
void computermove(char a[ROW][COL], int row, int col);

// 判断是否胜出：返回 * 玩家胜利，返回 # 电脑胜利， 返回 d 平局， 返回 c 游戏继续
char Result(char a[ROW][COL], int row, int col);


#endif
