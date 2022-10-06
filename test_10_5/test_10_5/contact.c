#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void Initcontact(struct Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, MAX * sizeof(struct Peoinfo));
}

void Addcontact(struct Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷���������\n");
		return;
	}
	printf("������������\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰��\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("���������䣺\n");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������ַ��\n");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("������ϵ�˳ɹ�\n");
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
	printf("������Ҫɾ�����˵�����\n");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
}

void Searchcontact(const struct Contact* pc)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ��˵�����\n");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-12s\t%-5s\t%-30s\n", "����", "�Ա�", "�绰", "����", "��ַ");
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
	printf("������Ҫ�޸ĵ��˵�����\n");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("������������\n");
		scanf("%s", pc->data[pc->sz].name);
		printf("�������Ա�\n");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰��\n");
		scanf("%s", pc->data[pc->sz].tele);
		printf("���������䣺\n");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("�������ַ��\n");
		scanf("%s", pc->data[pc->sz].addr);
		printf("�޸ĳɹ�\n");
	}
}

void Showcontact(struct Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-12s\t%-5s\t%-30s\n", "����", "�Ա�", "�绰", "����", "��ַ");
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
	printf("��ճɹ�\n");
}

int Cmp_ByName(const void* e1, const void* e2)
{
	return strcmp(((struct Peoinfo*)e1)->name, ((struct Peoinfo*)e1)->name);
}

void Sortcontact(struct Contact* pc) 
{
	qsort(pc->data, pc->sz, sizeof(struct Peoinfo), Cmp_ByName);
	printf("�������\n");
}

