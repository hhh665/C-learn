#define _CRT_SECURE_NO_WARNINGS 1

#include <assert.h>
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

char* my_strcpy(char* destination, const char* source)
{
	assert(destination);
	assert(source);
	char* ret = destination;
	while (*destination++ = *source++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "hello bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}