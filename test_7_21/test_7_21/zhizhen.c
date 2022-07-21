#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	printf("%p", pa);
	return 0;
}