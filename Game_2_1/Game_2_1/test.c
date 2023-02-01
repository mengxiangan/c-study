#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu() {
	printf("***************************\n");
	printf("***   1:��������Ϸ   ******\n");
	printf("***   0:�˳���Ϸ     ******\n");
	printf("***************************\n");
	printf("*******��>");
}

void game() {
	//�洢���� - ��ά����
	char board[ROW][COL];
	char ret = 0;
	//��ʼ������ -��ʼ���ո�
	InitBoard(board, ROW, COL);
	//��ӡ���� -�����Ǵ�ӡ���������
	DisplayBoard(board, ROW, COL);
	//�������
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret =IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*') {
		printf("���Ӯ����Ϸ��\n");
	}else if (ret == '#') {
		printf("����Ӯ����Ϸ��\n");
	}
	else {
		printf("ƽ�֣�\n");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������!\n");
			break;
		}
	} while (input);
	return 0;
}