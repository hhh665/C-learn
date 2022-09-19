#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//struct stu 
//{
//	char name[10];
//	int age;
//};
//int cmp_int(const void* e1, const void* e2)
//{
//	return ((*(int*)e1) - (*(int*)e2));
//}
//
//int cmp_str(const void* e1, const void* e2)
//{
//	return ((*(char*)e1) - (*(char*)e2));
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void Swap(char* buf1,char* buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		int tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void new_bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	/*int arr[10] = { 2,5,1,3,6,7,4,0,9,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	int arr[10] = { 2,5,1,3,6,7,4,0,9,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	new_bubble_sort(arr, sz, sizeof(arr[0]),cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//} 

//int main()
//{
//	//int
//	/*int arr[10] = { 2,5,1,3,6,7,4,0,9,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	
//	//str
//	/*char arr[10] = "decgbaf";
//	int sz = strlen(arr);
//	qsort(arr, sz, sizeof(arr[0]), cmp_str);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}*/
//
//	//struct name
//	/*struct stu s[] = { {"zhangsan", 20}, {"lisi", 55}, {"wangwu", 40} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);*/
//
//	//struct age
//	struct stu s[] = { {"zhangsan", 20}, {"lisi", 55}, {"wangwu", 40} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			if (a != b)
//			{
//				for (c = 1; c <= 5; c++)
//				{
//					if (a != c && b != c)
//					{
//						for (d = 1; d <= 5; d++)
//						{
//							if (a != d && b != d && c != d)
//							{
//								for (e = 1; e <= 5; e++)
//								{
//									if (a != e && b != e && c != e && d != e)
//									{
//										if (((b == 2) + (a == 3) == 1) &&
//											((b == 2) + (e == 4) == 1) &&
//											((c == 1) + (d == 2) == 1) &&
//											((c == 5) + (d == 3) == 1) &&
//											((e == 4) + (a == 1) == 1))
//										{
//											printf("A:%d,B:%d,C:%d,D:%d,E:%d\n", a, b, c, d, e);
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	for (a = 0; a < 2; a++)
//	{
//		for (b = 0; b < 2; b++)
//		{
//			for (c = 0; c < 2; c++)
//			{
//				for (d = 0; d < 2; d++)
//				{
//					if ((a == 0) + (c == 1) + (d == 1) + (d == 0) == 3)
//					{
//						if (a + b + c + d == 1)
//						{
//							if (a == 1)
//								printf("A是凶手\n"); 
//							if (b == 1)
//								printf("B是凶手\n");
//							if (c == 1)
//								printf("C是凶手\n");
//							if (d == 1)
//								printf("D是凶手\n");
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

void YangHui(int (*arr)[10])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j < i; j++)
		{
			if (i == j || j == 0)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
}

void print(int(*arr)[10])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j < i; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[10][10] = { 0 };
	YangHui(arr);
	print(arr);
	return 0;
}