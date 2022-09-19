#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//void levorotation(char arr[], int num, int sz)
//{
//	for (int i = 0; i < num; i++)
//	{
//		
//		for (int j = 0; j < sz - 1; j++)
//		{
//			char tmp = arr[j];
//			*(arr + j) = *(arr + j + 1);
//			*(arr + j + 1) = tmp;
//		}
//	}
//}
//void dextrotation(char arr[], int num, int sz)
//{
//	for (int i = 0; i < num; i++)
//	{
//		for (int j = sz - 1; j > 0; j--)
//		{
//			char tmp = arr[j];
//			*(arr + j) = *(arr + j - 1);
//			*(arr + j - 1) = tmp;
//		}
//	}
//}
//void printarr(char* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//}
//int main()
//{
//	char arr[10] = { 0 };
//	int n = 0;
//	printf("ÇëÊäÈë×Ö·û´®£º");
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	printf("ÇëÊäÈë×óÐý×Ö·ûÊý£º");
//	scanf("%d", &n);
//	levorotation(arr, n, sz);
//	printarr(arr, sz);
//	return 0;
//}

//int is_rotate(char s1[], char s2[], int sz1)
//{
//	for (int i = 1; i <= sz1; i++)
//	{
//		levorotation(s1, i, sz1);
//		if (strcmp(s1, s2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char s1[10] = { 0 };
//	char s2[10] = { 0 };
//	printf("ÇëÊäÈës1:");
//	scanf("%s", s1);
//	printf("ÇëÊäÈës2:");
//	scanf("%s", s2);
//	int sz1 = strlen(s1);
//	int sz2 = strlen(s2);
//	int result = is_rotate(s1, s2, sz1);
//	if (result)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}



//int main()
//{
//	int num = 0;
//	printf("ÇëÊäÈëÒª²éÕÒµÄÊý×Ö£º");
//	scanf("%d", &num);
//	int i = 0;
//	int j = 0;
//	int arr[5][5] = { {1,2,3,4,5},
//					  {2,3,4,5,6},
//					  {3,4,5,6,7},
//					  {4,5,6,7,8},
//					  {5,6,7,8,9} };
//	int(*parr)[5] = arr;
//	while (i < 5)
//	{
//		if ((*parr)[i] == num)
//		{
//			printf("%d´æÔÚ\n", num);
//			break;
//		}
//		else
//		{
//			i++;
//		}
//		if (i == 5)
//		{
//			parr++;
//			i = 0;
//			j++;
//		}
//		if (j == 5)
//		{
//			printf("%d²»´æÔÚ\n", num);
//			break;
//		}
//	}
//	return 0;
//}

