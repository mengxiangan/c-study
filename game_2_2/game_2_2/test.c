#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu() {
	printf("***************************\n");
	printf("***   1:ɨ����Ϸ     ******\n");
	printf("***   0:�˳���Ϸ     ******\n");
	printf("***************************\n");
}


int main() {
	int input = 0;
	do {
		menu();
		printf("***��>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("ɨ��\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while(input);
	return 0;
}