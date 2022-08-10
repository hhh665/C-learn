#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void sort(int* arr, int sz)
{
	int i = 0;
	for (i = sz - 1; i >= 0; i--)
	{
		int j = 0;
		for (j = 0; j < i; j++)
		{
			if (arr[j] % 2 == 0)
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	return 0;
}