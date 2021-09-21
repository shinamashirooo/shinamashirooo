#define _CRT_SECURE_NO_WARNINGS 

#include "game2.h"

//�˵�
void menu()
{
	printf("***************************\n");
	printf("*****1. play   0. exit*****\n");
	printf("***************************\n"); 
}

//������Ϸ���㷨ʵ��
void game()
{
	char ret;
	//����-���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// �ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// �ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	int input;
	srand((unsigned int)time(NULL));
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
			printf("ѡ����󣡣�����������ѡ��1 �� 0��\n");
			break;	
		}
	} while (input);
}

int main()
{

	test();
	return 0;
}