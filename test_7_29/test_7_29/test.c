#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}


//int num_1(int n)
//{
//    int count = 0;
//    int flag = 1;
//    while (flag != 0) 
//    {
//        if ((n & flag) != 0) 
//        {
//            count++;
//        }
//        flag = flag << 1;
//    }
//    return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = num_1(a);
//	printf("%d", ret);
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int count = 0;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) != ((b >> i) & 1))
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}