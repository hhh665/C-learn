#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

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
		case 1:
			Addcontact(&con);
			break;
		case 2:
			Delcontact(&con);
			break;
		case 3:
			Searchcontact(&con);
			break;
		case 4:
			Modifycontact(&con);
			break;
		case 5:
			Showcontact(&con);
			break;
		case 6:
			Clearcontact(&con);
			break;
		case 7:
			Sortcontact(&con);
			break;
		case 0:
			printf("���˳�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (n);
	
	return 0;
}