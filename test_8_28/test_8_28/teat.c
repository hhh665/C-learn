#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int i = 0;
    int a = 0;
    int b = 0;
    scanf("%d %d", &n, &m);
    int arr1[n];
    int arr2[m];
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr2[i]);
    }
    i = 0;
    while (i < (m + n))
    {
        if (a == m)
            printf("%d ", arr1[a++]);
        else if (b == n)
            printf("%d ", arr2[b++]);
        else if (arr1[a] >= arr2[b])
            printf("%d ", arr2[b++]);
        else if (arr1[a] <= arr2[b])
            printf("%d ", arr1[a++]);
        i++;
    }
    return 0;
}