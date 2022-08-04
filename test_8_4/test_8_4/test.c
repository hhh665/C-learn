#define _CRT_SECURE_NO_WARNINGS 1

#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", ( * p).a);
//	return 0;
//}



int main()
{
	int price = 1;
	int money = 0;
	scanf("%d", &money);
	int num = money / price;
	int count = 0;
	int empty = 0;
	while (num > 1)
	{
		count += num;
		num = (num + empty) / 2;
		empty = num % 2;

	}
	printf("%d", count);
	return 0;
}