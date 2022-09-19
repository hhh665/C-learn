#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct stu
{
	char name[20];
	int age;
};
int cmp(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test(struct stu s[], int sz)
{
	qsort(s,sz,sizeof(s[0]), cmp);
}
int main()
{
	struct stu s[] = { {"zhangsan",18},{"yisillisilsi",55},{"wangwu",45} };
	int sz = sizeof(s) / sizeof(s[0]);
	test(s,sz);
	return 0;
}

//int main()
//{
//	int i = 0;
//	char arr[4] = "ABCD";
//	int sz = sizeof(arr) / sizeoff(arr[0]);
//	int n = 0;
//	printf("ÇëÊäÈë×óÐýÊý£º");
//	scanf("%d", &n);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 
//	}
//	return 0;
//}