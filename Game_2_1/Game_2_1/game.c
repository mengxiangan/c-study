#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("����ߣ�>\n");
	while (1) {
		printf("������Ҫ�µ����꣺");
		scanf("%d %d", &x, &y);
		//�ж������Ƿ�Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			//�ж������Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("�õ����ѱ�ռ�ã����������룡\n");
			}
		}
		else {
			printf("�������겻�Ϸ������������룡\n");
		}
	}
}

ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = rand()%row;
	int y = rand()%col;
	printf("�����ߣ�>\n");
	while (1) {
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
}
