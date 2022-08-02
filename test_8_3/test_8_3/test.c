#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 1;
	int* pa = &a;
	printf("%zu,%zu", sizeof(a), sizeof(pa));
	return 0;
}
