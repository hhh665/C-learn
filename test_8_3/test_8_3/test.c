#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int* pa = &a;
//	printf("%zu,%zu", sizeof(a), sizeof(pa));
//	return 0;
//}

//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    char arr[1000] = { 0 };
//    scanf("%[^\n]", arr);
//    char* pa = arr;
//    count = strlen(arr);
//    for (i = count - 1; i >= 0; i--)
//    {
//        printf("%c", *(pa + i));
//    }
//    return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr[14] = { "      *      " };
//	int i = 0;
//	char* pa = arr;
//	for (i = 0; i < 6; i++)
//	{
//		
//		if (i <= 5)
//		{
//			*(arr + i + 6) = '*';
//			*(arr + 6 - i) = '*';
//		}
//		for (int j = 0; j < 13; j++)
//		{
//			printf("%c", *(arr + j));
//		}
//		printf("\n");
//	}
//	strcpy(arr, " *********** ");
//	for (i = 1; i < 6; i++)
//	{
//		*(arr + i) = ' ';
//		*(arr + 12 - i) = ' ';
//		for (int j = 0; j < 13; j++)
//		{
//			printf("%c", *(arr + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 10000; i++)
//	{
//		if (i < 10)
//		{
//			if (pow(i, 1) == i)
//			{
//				printf("%d ", i);
//			}
//		}
//		if (i < 100 && i >= 10)
//		{
//			if (pow(i%10, 2) + pow(i / 10,2) == i)
//			{
//				printf("%d ", i);
//			}
//		}
//		if (i < 1000 && i >= 100)
//		{
//			if (pow(i % 10, 3) + pow(i / 10 % 10, 3) + pow(i / 100, 3) == i)
//			{
//				printf("%d ", i);
//			}
//		}
//		if (i >= 1000)
//		{
//			if (pow(i % 10, 4) + pow(i / 10 % 10, 4) + pow(i / 100 % 10, 4) + pow(i / 1000,4) == i)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}
#include <math.h>
int main()
{
	int a = 0;
	int sum = 0;
	int b = 0;
	scanf("%d", &a);
	for (int i = 0; i < 5; i++)
	{
		b += a * pow(10, i);
		sum += b;
	}
	printf("%d", sum);
	return 0;
}