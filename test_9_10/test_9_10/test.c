#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int num = 0;
	printf("������Ҫ���ҵ����֣�");
	scanf("%d", &num);
	int i = 0;
	int j = 0;
	int arr[5][5] = { {1,2,3,4,5},
					  {2,3,4,5,6},
					  {3,4,5,6,7},
					  {4,5,6,7,8},
					  {5,6,7,8,9} };
	int(*parr)[5] = arr;
	while (i < 5)
	{
		if ((*parr)[i] == num)
		{
			printf("%d����\n", num);
			break;
		}
		else
		{
			i++;
		}
		if (i == 5)
		{
			parr++;
			i = 0;
			j++;
		}
		if (j == 5)
		{
			printf("%d������\n", num);
			break;
		}
	}
	return 0;
}