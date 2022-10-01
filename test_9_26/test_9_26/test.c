#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

char* my_strcat(char* dest, const char* src)
{
	char* cur = dest;
	while (*cur != '\0')
	{
		cur++;
	}
	while (*cur++ = *src++)
	{
		;
	}
	return dest;
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}