#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char* arr1 = "abcdef";
	char p[] = "xxxxxxxxx";
	memcpy(p, arr1, 6);
	printf("%s\n", p);
	return 0;
}