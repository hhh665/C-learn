#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//float pow(int x, int y)
//{
//	if (y == 0)
//		return 1;
//	else if (y == 1)
//		return x;
//	else if (y < 0)
//		return 1.0 / (x * pow(x, -y - 1));
//	else
//		return x * pow(x, y - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	float ret = pow(n, k);
//	printf("%f", ret);
//	return 0;
//}

//int	DigitSum(int n)
//{
//	if (n > 9)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	sum = DigitSum(a);
//	printf("%d", sum);
//	return 0;
//}

//#include <string.h>
//void reverse_string(char* string)
//{
//	int left = *string;
//	int right = strlen(string) - 1;
//	*string = *(string + right);
//	*(string + right) = '\0';
//	if (strlen(string + 1) > 1)
//	{
//		reverse_string(string + 1);
//	}
//	*(string + right) = left;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//int my_strlen1(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen1(arr + 1);
//	else
//		return 0;
//}
//int my_strlen2(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", my_strlen1(arr));
//	printf("%d\n", my_strlen2(arr));
//	return 0;
//}
//#include <stdio.h>
//
//int sum(int N, int* arr)
//{
//    if (N > 1)
//    {
//        N--;
//        return arr + sum(N, arr + 1);
//    }
//    else
//        return arr;
//}
//int main()
//{
//    int ret = 0;
//    int N = 0;
//    scanf("%d", &N);
//    int arr[5];
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    ret = sum(N, arr[N]);
//    printf("%d", ret);
//    return 0;
//}

////递归
//int Fib1(int n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return Fib1(n - 1) + Fib1(n - 2);
//}
//
////非递归
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret1 = Fib1(n);
//	int ret2 = Fib2(n);
//	printf("%d\n%d\n", ret1,ret2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int b[10] = { 2,3,4,5,6,7,8,9,10,11 };
//	for (i = 0; i < 10; i++)
//	{
//		int t = a[i];
//		a[i] = b[i];
//		b[i] = t;
//	}
//	printf("a:");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\nb:");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//void init(int* arr,int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int* arr, int left, int right)
//{
//	int t = 0;
//	if (left < right)
//	{
//		t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		left++;
//		right--;
//		reverse(arr, left, right);
//	}
//}
//
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int left = 0;
//	int right = sz - 1;
//	print(a, sz);
//	reverse(a, left, right);
//	print(a, sz);
//	init(a, sz);
//	print(a, sz);
//	return 0;
//}

void bubble_sort(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}
int main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 1; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//
//	//0 1 2 3 4 5 6 7 8 9
//	//要对数组升序排序
//	//冒泡排序
//	//数组传参的时候
//	//写的是数组名
//	//数组名本质是数组首元素的地址
//	//传参的时候，传递的就是数组首元素的地址
//	//那么数组的形参就应该是指针变量来接收
//	//数组名的降级
//	//
//	bubble_sort(arr, sz);
//	//打印
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}