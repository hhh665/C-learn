#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int get_max(int x, int y)
{
    if (x >= y)
        return x;
    else
        return y;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    scanf("%d %d", &num1, &num2);
    int max = get_max(num1, num2);
    printf("%d\n", max);
    return 0;
}