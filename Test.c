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
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > shinamashiro)
		{
			printf("猜大了\n");
		}
		else if(guess < shinamashiro)
		{
			printf("猜小了\n");
		}
		else 
		{
			printf("恭喜你，猜中了！！！\n ");
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
		printf("请选择 >:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误!!! (请重新输入1 或 0)");
			break;
		}
	} while (input);

	return 0;
}