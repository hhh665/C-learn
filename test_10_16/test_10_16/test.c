#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define MAX(x, y) ((x)>(y)?(x):(y))

int main()
{
	int a = 3;
	int b = 4;
	int m = MAX(++a, ++b);
	printf("%d %d %d\n", m, a, b);
	return 0;
}