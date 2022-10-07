#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	CLEAR,
	SORT
};

void menu()
{
	printf("***************************************\n");
	printf("****************通讯录系统*************\n");
	printf("***************************************\n");
	printf("*****     1.add         2.del     *****\n");
	printf("*****     3.search      4.modify  *****\n");
	printf("*****     5.show        6.clear   *****\n");
	printf("*****     7.sort        0.exit    *****\n");
	printf("***************************************\n");
	printf("***************************************\n");
}



int main()
{
	int n = 0;
	struct Contact con;
	Initcontact(&con);
	do
	{
		menu();
		printf("请输入要执行的选项：");
		scanf("%d", &n);
		switch (n)
		{
		case ADD:
			Addcontact(&con);
			break;
		case DEL:
			Delcontact(&con);
			break;
		case SEARCH:
			Searchcontact(&con);
			break;
		case MODIFY:
			Modifycontact(&con);
			break;
		case SHOW:
			Showcontact(&con);
			break;
		case CLEAR:
			Clearcontact(&con);
			break;
		case SORT:
			Sortcontact(&con);
			break;
		case EXIT:
			Destorycontact(&con);
			printf("已退出\n");
			break;
		default:
			printf("选项错误，请重新选择！\n");
			break;
		}
	} while (n);
	
	return 0;
}