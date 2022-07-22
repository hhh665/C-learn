#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		if (1 == num % 2)
//			printf("%d ", num);
//		num++;
//	}
//	return 0;
//}
//int main()
//{
//	char n = "asdasd";
//	printf("%zu", sizeof(n));
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	do
//	{
//		printf("%d\n", a);
//		a++;
//	} 
//	while (a < 10);
//	return 0;
//}

//int main()
//{
//	//int i = 0;
//	//int j = 0;
//	int sum = 0;
//	int ret = 1;
//	int n = 0;
//	/*for (j = 1; j <= 4; j++)
//	{
//		int ret = 1;
//		for (i = 1;  i <= j; i++)
//		{
//			ret = ret * i;
//		}
//		sum += ret;
//	}*/
//	for (n = 1; n <= 4; n++)
//	{
//		ret = ret * n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	int left = 0;
//	int right = sz - 1;
//	int k = 7;
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;
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
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}
//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
int main()
{
	int i = 1;
	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
	}
	return 0;
}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if ((a > b) && (a > c))
//	{
//		printf("%d ", a);
//		if (b > c)
//		{
//			printf("%d ", b);
//			printf("%d\n", c);
//		}
//		else
//		{
//			printf("%d ", c);
//			printf("%d\n", b);
//		}
//	}
//	if ((b > a) && (b > c))
//	{
//		printf("%d ", b);
//		if (a > c)
//		{
//			printf("%d ", a);
//			printf("%d\n", c);
//		}
//		else
//		{
//			printf("%d ", c);
//			printf("%d\n", a);
//		}
//	}
//	if ((c > b) && (c > a))
//	{
//		printf("%d ", c);
//		if (a > b)
//		{
//			printf("%d ", a);
//			printf("%d ", b);
//		}
//		else
//		{
//			printf("%d ", b);
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i < 201; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//			printf("%d\n", i);		
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for(i=1000;i<2001;i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d年\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b != 0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int res = 0;
//	for (i = 1;i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			res = i * j;
//			if (j < 9)
//			{
//				printf("%d*%d=%d ", i, j, res);
//			}
//			else
//				printf("%d*%d=%d\n", i, j, res);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("请输入十个整数：");
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}