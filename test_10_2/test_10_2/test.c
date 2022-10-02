#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[1000001] = { 0 };
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d ", arr[i]);
        }
        else if (i > 0 && arr[i] != arr[i - 1])
        {
            printf("%d ", arr[i]);
        }
        else
        {
            continue;
        }
    }
    return 0;
}