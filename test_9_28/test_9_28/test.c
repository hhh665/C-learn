#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//char* my_strstr(const char* arr1, const char* arr2)
//{
//	char* s1 = arr1 - 1;
//	char* s2 = arr2;
//	while (*s1 != *s2)
//	{
//		int count = 0;
//		s1++;
//		while (*s1 == *s2)
//		{
//			s1++;
//			count++;
//			s2++;
//			if (*s2 == '\0')
//			{
//				return s1 - count;
//			}
//		}
//		//s1 = s1 - count;
//		s2 = arr2;
//		if (*s1 == '\0')
//			break;
//	}
//	return NULL;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	if (*str2 == '\0')
//	{
//		return (char*) str1;
//	}
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return (char*)p;
//		p++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbcdabcdefab";
//	char arr2[] = "bcd";
//	char* pa = my_strstr(arr1, arr2);
//	if (pa == NULL)
//	{
//		printf("²»´æÔÚ\n");
//	}
//	else
//	{
//		printf("%s\n", pa);
//	}
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

size_t my_strlen(const char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	char arr[20] = "abcdef";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}