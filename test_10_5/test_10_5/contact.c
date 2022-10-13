#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//void Initcontact(struct Contact* pc)
//{
//	assert(pc);
//	pc->sz = 0;
//	memset(pc->data, 0, MAX * sizeof(struct Peoinfo));
//}

int check_capacity(struct Contact* pc);

void Loadcontact(struct Contact* pc)
{
	FILE* pfg = fopen("data.txt", "rb");
	if (pfg == NULL)
	{
		perror("Loadcontact:");
		return;
	}
	struct Peoinfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct Peoinfo), 1, pfg))
	{
		check_capacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	fclose(pfg);
	pfg = NULL;
}

void Initcontact(struct Contact* pc)
{
	assert(pc);
	pc->data = (struct Peoinfo*)malloc(DEFAULT_SZ * sizeof(struct Peoinfo));
	if (pc->data == NULL)
	{
		perror("Initcontact():");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
}

//void Addcontact(struct Contact* pc)
//{
//	assert(pc);
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已满，无法添加数据\n");
//		return;
//	}
//	printf("请输入姓名：\n");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("请输入性别：\n");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("请输入电话：\n");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("请输入年龄：\n");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("请输入地址：\n");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//	printf("添加联系人成功\n");
//}

int check_capacity(struct Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		struct Contact* ptr = (struct Contact*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(struct Peoinfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");
		}
		else
		{
			perror("Addcontact():");
			return 0;
		}
	}
	else
		return 1;
}

void Addcontact(struct Contact* pc)
{
	assert(pc);
	if (0 == check_capacity(pc))
	{
		return;
	}
	printf("请输入姓名：\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别：\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话：\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入年龄：\n");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入地址：\n");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("添加联系人成功\n");
}

void Destorycontact(struct Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}

static int FindByName(const struct Contact* pc, char* name)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void Delcontact(struct Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入要删除的人的名字\n");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("删除成功\n");
	}
}

void Searchcontact(const struct Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入要查找的人的名字\n");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-12s\t%-5s\t%-30s\n", "姓名", "性别", "电话", "年龄", "地址");
		printf("%-20s\t%-5s\t%-12s\t%-5d\t%-30s\n", pc->data[ret].name,
			pc->data[ret].sex,
			pc->data[ret].tele,
			pc->data[ret].age,
			pc->data[ret].addr);
	}
}

void Modifycontact(struct Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入要修改的人的名字\n");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入姓名：\n");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入性别：\n");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入电话：\n");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入年龄：\n");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("请输入地址：\n");
		scanf("%s", pc->data[pc->sz].addr);
		printf("修改成功\n");
	}
}

void Showcontact(const struct Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-12s\t%-5s\t%-30s\n", "姓名", "性别", "电话", "年龄", "地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5s\t%-12s\t%-5d\t%-30s\n", pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].age,
			pc->data[i].addr);
	}
}

void Clearcontact(struct Contact* pc)
{
	Initcontact(pc);
	printf("清空成功\n");
}

int Cmp_ByName(const void* e1, const void* e2)
{
	return strcmp(((struct Peoinfo*)e1)->name, ((struct Peoinfo*)e1)->name);
}

void Sortcontact(struct Contact* pc) 
{
	qsort(pc->data, pc->sz, sizeof(struct Peoinfo), Cmp_ByName);
	printf("排序完成\n");
}

void Savecontact(struct Contact* pc)
{
	FILE* pf = fopen("data.txt", "wb");
	if (pf == NULL)
	{
		perror("Savecontact:");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data+i, sizeof(struct Peoinfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}


