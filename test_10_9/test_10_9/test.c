#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//char* my_strncpy(char* dest, const char* source, int num)
//{
//	char* p = dest;
//	while (num)
//	{
//		*dest++ = *source++;
//		num--;
//	}
//	*dest = '\0';
//	return p;
//}
//
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[10] = "abcdef";
//	my_strncpy(arr1, arr2, 5);
//	return 0;
//}

char* my_strncat(char* dest, const char* src, int num)
{
	char* p = dest;
	while (*dest)
	{
		dest++;
	}
	while (num)
	{
		*dest++ = *src++;
		num--;
	}
	*dest = '\0';
	return p;
}

int main()
{
	char arr1[20] = "abcdef";
	char arr2[20] = "abdacf";
	my_strncat(arr1, arr2, 4);
	return 0;
}