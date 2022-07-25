#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int exchange_int(int* px, int* py)
//{
//	int t = *px;
//	*px = *py;
//	*py = t;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	exchange_int(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

////递归
//int fac1(int n)
//{
//	if (n < 2)
//		return 1;
//	else
//		return n * fac1(n - 1);
//}
//
////非递归
//int fac2(int n)
//{
//	int res = 1;
//	while (n > 0)
//	{
//		res *= n;
//		n--;
//	}
//	return res;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int res1 = fac1(a);
//	int res2 = fac2(a);
//	printf("%d\n%d", res1, res2);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//void is_leap_year(int n)
//{
//	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
//	{
//		printf("%d年是闰年", n);
//	}
//	else
//		printf("%d年不是闰年", n);
//}
//
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	is_leap_year(year);
//	return 0;
//}

int is_primer(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int j = 0;
	for (j = 101; j < 200; j++)
	{
		if (is_primer(j) == 1)
		{
			printf("%d ", j);
		}
	}
	return 0;
}