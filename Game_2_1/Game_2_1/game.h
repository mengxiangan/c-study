#define _CRT_SECURE_NO_WARNINGS 1
//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//���ŵĶ���
#define ROW 3
#define COL 3

//����������

//��ʼ������
void InitBoard(char board[ROW][COL],int row,int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
PlayerMove(char board[ROW][COL], int row, int col);

//��������
ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ϸ״̬
//1��* -���Ӯ
//2��# -����Ӯ
//3��Q -ƽ��
//4��C -��Ϸ����
IsWin(char board[ROW][COL], int row, int col);