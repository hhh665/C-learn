#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

void menu()
{
	printf("**************************\n");
	printf("****** ������С��Ϸ ******\n");
	printf("******    1.play    ******\n");
	printf("******    0.exit    ******\n");
	printf("******/������1~100/ ******\n");
	printf("**************************\n");
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	int i = 0;
	int a = 0;
	while (1)
	{
		i++;
		if (i == 9)
		{
			char input1[20] = { 0 };
			printf("��´�̫����ˣ����ڶ���ִ�гͷ���");
			system("shutdown -s -t 60");
			printf("��ע�⣬��ĵ��Խ��ڡ�һ���ӡ���ػ���\n");
			printf("����㲻��ػ��������롰������������ȡ���ػ���\n");
			scanf("%s", input1);
			if (strcmp(input1, "������") == 0)
			{
				system("shutdown -a");
				printf("�ػ�ȡ����");
				goto age;
			}
			else
			{
				printf("�����ǰɣ���ô����ע�⣬��ĵ��Խ��ڡ�30�롿��ػ���\n");
				system("shutdown -s -t 30");
				printf("����㲻��ػ��������롰��������������ȡ���ػ���\n");
				scanf("%s", input1);
				if (strcmp(input1, "��������") == 0)
				{
					system("shutdown -a");
					printf("�ػ�ȡ����");
					goto age;
				}
				else
				{
					printf("�����ǰɣ���ô����ע�⣬��ĵ��Խ��ڡ�5�롿��ػ���\n");
					system("shutdown -s -t 10");
					printf("��û����ػ����ˣ�\n");
					for (a = 5; a >= 0; a--)
					{
						printf("%d\n", a);
						Sleep(1000);
					}
					printf("ƭ��ģ���ʵ��ʮ��,�ټ����� ^_^\n");
				}
			}
		}
		printf("������������ɣ��������>>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		if (guess > ret)
		{
			printf("�´���\n");
		}
		if (guess == ret)
		{
			printf("��ϲ��¶���!\n");
		age:
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}