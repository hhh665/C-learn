#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int my_strcmp(const char* s1, const char* s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return 0;
		s1++;
		s2++;
	}
	return *s1 - *s2;
}


int main()
{
	char arr1[] = "abcd";
	char arr2[] = "abc";
	int ret = my_strcmp(arr1, arr2);
	if (ret > 0)
		printf("arr1>arr2\n");
	else if (ret < 0)
		printf("arr1<arr2\n");
	else
		printf("arr1=arr2\n");
	return 0;
}