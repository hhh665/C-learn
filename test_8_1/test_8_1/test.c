#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}

//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

int main()
{
	int i = 0;
	int a = 0;
	scanf("%d", &a);
	//打印奇数项
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
	//打印偶数项
	for (i = 31; i > 0; i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
	return 0;
}