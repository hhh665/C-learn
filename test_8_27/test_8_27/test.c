#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("*******************************\n");
	printf("******      1. play      ******\n");
	printf("******      0. exit      ******\n");
	printf("*******************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');
	set_mine(mine, ROW, COL);
	display_board(mine, ROW, COL);
	display_board(show, ROW, COL);
	find_mine(mine, show, ROW, COL);

	
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("��Ϸ����");
			break;
		}
		default:
		{
			printf("ѡ�����������ѡ��");
			break;
		}
		}
	} while (input);
	return 0;
}