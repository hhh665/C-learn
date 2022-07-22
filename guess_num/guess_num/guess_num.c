#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

void menu()
{
	printf("**************************\n");
	printf("****** 猜数字小游戏 ******\n");
	printf("******    1.play    ******\n");
	printf("******    0.exit    ******\n");
	printf("******/数字在1~100/ ******\n");
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
			printf("你猜错太多次了！现在对你执行惩罚！");
			system("shutdown -s -t 60");
			printf("请注意，你的电脑将在【一分钟】后关机！\n");
			printf("如果你不想关机，请输入“我是猪”，即可取消关机。\n");
			scanf("%s", input1);
			if (strcmp(input1, "我是猪") == 0)
			{
				system("shutdown -a");
				printf("关机取消。");
				goto age;
			}
			else
			{
				printf("不输是吧，那么：请注意，你的电脑将在【30秒】后关机！\n");
				system("shutdown -s -t 30");
				printf("如果你不想关机，请输入“我是懒猪”，即可取消关机。\n");
				scanf("%s", input1);
				if (strcmp(input1, "我是懒猪") == 0)
				{
					system("shutdown -a");
					printf("关机取消。");
					goto age;
				}
				else
				{
					printf("不输是吧，那么：请注意，你的电脑将在【5秒】后关机！\n");
					system("shutdown -s -t 10");
					printf("你没有挽回机会了！\n");
					for (a = 5; a >= 0; a--)
					{
						printf("%d\n", a);
						Sleep(1000);
					}
					printf("骗你的，其实是十秒,再见啦！ ^_^\n");
				}
			}
		}
		printf("随机数字已生成，请猜数字>>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		if (guess == ret)
		{
			printf("恭喜你猜对了!\n");
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
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);

	return 0;
}