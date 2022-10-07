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
	printf("****************ͨѶ¼ϵͳ*************\n");
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
		printf("������Ҫִ�е�ѡ�");
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
			printf("���˳�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (n);
	
	return 0;
}