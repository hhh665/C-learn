#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
    int a = 0;
    while (scanf("%d", &a) != EOF)
    {
        int i = 0;
        for (i = 1; i <= a; i++)
        {
            int j = 0;
            for (j = 0; j < a; j++)
            {
                if (j < a - i)
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}