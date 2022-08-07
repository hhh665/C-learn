#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int price = 1;
//	int money = 0;
//	scanf("%d", &money);
//	int num = money / price;
//	int empty = num;
//	int count = 0;
//	if (empty < 2)
//	{
//		count = num;
//	}
//	while (empty > 1)
//	{
//		count += num;
//		num = empty / 2;
//		empty = num + empty % 2;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int num = 0;
//    int i = 0;
//    for (i = 10000; i < 100000; i++)
//    {
//        if ((i / 10000 * i % 10000) + (i / 1000 * i % 1000) + (i / 100 * i % 100) + (i / 10 * i % 10) == i)
//            printf("%d ", i);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++) // 范围
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 10; j <= 10000; j *= 10) // 取下每一位 用模10除10的方法 
//		{
//			sum += (i / j) * (i % j);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	scanf("%d", &a);

	return 0;
}
