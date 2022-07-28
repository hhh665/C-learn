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
	char ret = 0;
	char board[ROW][COL] = { 0 };
	init_board(board, ROW, COL);
	display_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢\n");
	if (ret == '#')
		printf("电脑赢\n");
	if (ret == 'Q')
		printf("平局\n");
	display_board(board, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
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
			printf("游戏结束");
			break;
		}
		default:
		{
			printf("选择错误，请重新选择！");
			break;
		}
		}
	} while (input);
	return 0;
}