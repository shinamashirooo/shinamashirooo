#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

void menu()
{
	printf("****************************************\n");
	printf("****      1. play      0. exit      ****\n");
	printf("****************************************\n");
}

void game()
{
	int shinamashiro;
	int guess = 0;
	shinamashiro = rand() % 100 + 1;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > shinamashiro)
		{
			printf("�´���\n");
		}
		else if(guess < shinamashiro)
		{
			printf("��С��\n");
		}
		else 
		{
			printf("��ϲ�㣬�����ˣ�����\n ");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ�� >:");
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
			printf("�������!!! (����������1 �� 0)");
			break;
		}
	} while (input);

	return 0;
}