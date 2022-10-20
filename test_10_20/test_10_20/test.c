#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//struct S
//{
//	int a;
//	int arr1[0];
//};
//
//void Find_single(int* arr, int size)
//{
//	int i = 0;
//	int n = 0;
//	struct S* p = (struct S*)malloc(sizeof(struct S));
//	for (i = 0; i < size; i++)
//	{
//		int j = 0;
//		int m = arr[i];
//		for (j = i; j < size; j++)
//		{
//			if (arr[j] == m)
//			{
//				n++;
//				struct S* ptr = (struct S*)realloc(p, sizeof(struct S) + n * sizeof(int));
//				if (ptr != NULL)
//				{
//					p = ptr;
//				}
//				p->arr1[j] = arr[j];
//				break;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < size; j++)
//		{
//			if (arr[i] = p->arr1[j])
//			{
//				break;
//			}
//		}
//		printf("%d", arr[i]);
//	}
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	int arr[10] = { 1,1,2,2,3,4,4,5,6,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Find_single(arr, sz);
//	return 0;
//}