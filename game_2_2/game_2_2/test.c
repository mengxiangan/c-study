#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu() {
	printf("***************************\n");
	printf("***   1:扫雷游戏     ******\n");
	printf("***   0:退出游戏     ******\n");
	printf("***************************\n");
}


int main() {
	int input = 0;
	do {
		menu();
		printf("***：>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("扫雷\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while(input);
	return 0;
}