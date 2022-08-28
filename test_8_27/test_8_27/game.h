#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_board(char board[ROWS][COLS], int row, int col, char set);

void display_board(char board[ROWS][COLS], int row, int col);

void set_mine(char mine[ROWS][COLS], int row, int col);

int get_mine_count(char mine[ROWS][COLS], int x, int y);

void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);


