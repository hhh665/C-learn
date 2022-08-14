#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] = "hello";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str)
	{
		count++;
		*str++;
	}
	return count;
}

int main()
{
	char arr[20] = "abcdef";
	printf("%d\n", my_strlen(arr));
	return 0;
}