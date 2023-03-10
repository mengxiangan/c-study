#define _CRT_SECURE_NO_WARNINGS 1
//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//符号的定义
#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
ComputerMove(char board[ROW][COL], int row, int col);

//判断游戏状态
//1：* -玩家赢
//2：# -电脑赢
//3：Q -平局
//4：C -游戏继续
IsWin(char board[ROW][COL], int row, int col);