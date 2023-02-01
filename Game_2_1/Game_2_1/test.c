#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu() {
	printf("***************************\n");
	printf("***   1:三子棋游戏   ******\n");
	printf("***   0:退出游戏     ******\n");
	printf("***************************\n");
	printf("*******：>");
}

void game() {
	//存储数据 - 二维数组
	char board[ROW][COL];
	char ret = 0;
	//初始化棋盘 -初始化空格
	InitBoard(board, ROW, COL);
	//打印棋盘 -本质是打印数组的内容
	DisplayBoard(board, ROW, COL);
	//玩家下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret =IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*') {
		printf("玩家赢得游戏！\n");
	}else if (ret == '#') {
		printf("电脑赢得游戏！\n");
	}
	else {
		printf("平局！\n");
	}
	DisplayBoard(board, ROW, COL);
}

int main() {
	int input=0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}