#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[10] = { 1,2,3 };
//	int arr2[] = { "a","b","c" };
//	int arr3[] = { "abc" };
//	printf("%d\n%d\n", strlen(arr2), strlen(arr3));
//	printf("%d ,%d", arr[0], arr1[4]);
//	return 0;
//}
//#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
////}
//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS 1
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int a = n / 1000;
//    int b = (n % 1000) / 100;
//    int c = (n % 100) / 10;
//    int d = n % 10;
//    printf("%d %d %d %d", a, b, c, d);
//    int result = a*1 + b*10 + c*100 + d*1000;
//    printf("%d", result);
//    return 0;
//}
#include<stdio.h>

//int main()
//{
//    int a, b, c, d, e;
//    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//    int result = (a + b + c + d + e) / 5.0;
//    printf("%.1lf", result);
//    return 0;
//}
#include<stdio.h>

int main()
{
    int a = 0; int b = 0;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (a >= b)
        {
            if (a == b)
            {
                printf("%d=%d\n", a, b);
            }
            else
            {
                printf("%d>%d\n", a, b);
            }
        }
        else
        {
            printf("%d<%d\n", a, b);
        }
    }
    return 0;
}
//#include<stdio.h>
//int main()
//{
//    int m, n;
//    while (scanf("%d %d", &m, &n) != EOF)
//    {
//        if (m == n)
//            printf("%d=%d\n", m, n);
//        if (m > n)
//            printf("%d>%d\n", m, n);
//        if (m < n)
//            printf("%d<%d\n", m, n);
//    }
//
//    return 0;
//}