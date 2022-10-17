#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//#define offsetof(type, member)\
//		&(((type*)0)->member)
//
//struct S
//{
//	char arr[5];
//	int m;
//	short n;
//};
//int main()
//{
//	int n = (int)offsetof(struct S, m);
//	printf("%d\n", n);
//	return 0;
//}

//#define EXCHANGE_BIN(num)\
//		((num&0xaaaaaaaa)>>1)+((num&0x55555555)<<1)
//
//int main()
//{
//	int n = 11;
//	int ret = EXCHANGE_BIN(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	if (strlen(str2) - strlen(str1) > 0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}

size_t my_strlen(const char* str)
{
	char* p = str;
	while (*p != '\0')
	{
		p++;
	}
	return p - str;
}

int main()
{
	char* arr = "abcdef";
	printf("%d\n", my_strlen(arr));
	return 0;
}