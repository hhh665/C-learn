#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>

//int main()
//{
//	int* p = (int*)malloc(0);
//	return 0;
//}

//int main()
//{
//	enum ENUM_A
//	{
//		X1,
//		Y1,
//		Z1 = 255,
//		A1,
//		B1,
//	};
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);
//	return 0;
//}

int Search_single(int* p,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = i; j < sz; j++)
		{

		}
	}
}

int main()
{
	int arr[10] = { 1,1,2,2,3,3,4,4,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Search_single(arr,sz);
	return 0;
}
