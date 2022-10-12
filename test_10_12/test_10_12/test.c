#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct S
{
	int num;
	char arr[10];
};

int main()
{
	struct S s = { 20,"abcdef" };
	FILE* pf = fopen("test.txt", "r");
	//fprintf(pf, "%d %s", s.num, s.arr);
	for (int i = 0; i < 6; i++)
	{
		printf("%c ",fgetc(pf));
	}
	fclose(pf);
	return 0;
}