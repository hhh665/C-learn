#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	float b = 0;
//	float ret = 0;
//	for (a = 1, b = 1.0; a < 101; a++)
//	{
//		ret = ret + b / a;
//	}
//	printf("%f", ret);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int num = 0;
//	for (a = 1; a < 100; a++)
//	{
//		if (a % 10 == 9)
//			num += 1;
//		if (a / 9 == 11)
//			num += 1;
//	}
//	printf("%d", num);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 0;
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			ret = i * j;
//			printf("%d*%d=%-2d ", i, j, ret);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int Swap(int* px, int* py)
{
	int t = 0;
	t = *px;
	*px = *py;
	*py = t;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前，a = %d，b = %d\n", a, b);
	Swap(&a, &b);
	printf("交换后，a = %d，b = %d\n", a, b);
	return 0;
}