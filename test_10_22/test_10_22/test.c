#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

////找两只单身狗
////使用异或
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	printf("%d %d\n", num1, num2);
//	return 0;
//}

//enum Status
//{
//	VALID,
//	INVALID
//};
//
//enum Status status = INVALID;
//
//int my_atoi(const char* str)
//{
//	if (str == NULL)
//		return 0;
//	if (*str == '\0')
//		return 0;
//	while (isspace(*str))
//	{
//		str++;
//	}
//	int flag = 1;
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long ret = 0;
//	while (isdigit(*str))
//	{
//		ret = ret * 10 + flag * (*str - '0');
//		if (ret < INT_MIN || ret > INT_MAX)
//		{
//			return 0;
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		status = VALID;
//		return (int)ret;
//	}
//	else
//	{
//		return (int)ret;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	char arr[10] = "123456";
//	i = my_atoi(arr);
//	if (status == VALID)
//	{
//		printf("合法的数据转换：%d\n", i);
//	}
//	else
//	{
//		printf("非法的数据转换：%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 31; i >= 0; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}

#include <stdio.h>
#include <math.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int a = 0;
//    for (i = 0;; i++)
//    {
//        if (n < pow(6, i))
//        {
//            a = i - 1;
//            break;
//        }
//    }
//    int res = 0;
//
//    for (i = a; i >= 0; i--)
//    {
//        int j = 0;
//        for (j = 1; j <= 6; j++)
//        {
//            if (n < j * pow(6, i))
//            {
//                res += (j - 1) * pow(10, i);
//                n = n - ((j - 1) * pow(6, i));
//                break;
//            }
//        }
//    }
//    printf("%d\n", res);
//    return 0;
//}

//#include <stdio.h>
//#include <math.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int a = 0;
//    for (i = 0;; i++)
//    {
//        if (n < pow(6, i))
//        {
//            a = i - 1;
//            break;
//        }
//    }
//    long long res = 0;
//
//    for (i = a; i >= 0; i--)
//    {
//        int j = 0;
//        for (j = 1; j <= 6; j++)
//        {
//            if (n < j * pow(6, i))
//            {
//                res += (j - 1) * pow(10, i);
//                n = n - ((j - 1) * pow(6, i));
//                break;
//            }
//        }
//    }
//    printf("%lld\n", res);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[20] = { 0 };
//    int i = 0;
//    while (n)
//    {
//        arr[i] = n % 6;
//        n /= 6;
//        i++;
//    }
//    for (--i; i >= 0; i--)
//    {
//        printf("%d", arr[i]);
//    }
//    return 0;
//}