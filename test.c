#define _CRT_SECURE_NO_WARNINGS 

#include "game3.h"

void menu()
{
	printf("**************************\n");
	printf("*****     1. play    *****\n");
	printf("*****     0. exit    *****\n");
	printf("**************************\n");
}

void game()
{
	//�׵���Ϣ����
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 }; //11 * 11
	//2.�Ų�����׵���Ϣ 
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//ɨ��
	FindMine(mine, show, ROW, COL);
}
	
void test()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����!!!��������ѡ��1 �� 0)\n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}