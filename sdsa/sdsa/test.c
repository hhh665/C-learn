#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void replaceSpace(char* str, int length)
{
    int i = 0;
    char* p = "";
    for (i = 0; i < length; i++)
    {
        if (str[i] == ' ')
        {
            int c = 0;
            strncat(p, str+c, i-c);
            strcat(p, "%20");
            c = i;
        }
    }
    str = p;
}
int main()
{
    char arr[20] = "We Are Happy";
    int sz = sizeof(arr) / sizeof(arr[0]);
    replaceSpace(arr, sz);
    printf("%s\n", arr);
    return 0;
}