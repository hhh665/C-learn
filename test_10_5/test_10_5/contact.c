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
//		printf("ͨѶ¼�������޷��������\n");
//		return;
//	}
//	printf("������������\n");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("�������Ա�\n");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("������绰��\n");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("���������䣺\n");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("�������ַ��\n");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//	printf("�����ϵ�˳ɹ�\n");
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
			printf("���ݳɹ�\n");
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
	printf("�����ϵ�˳ɹ�\n");
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

void Showcontact(const struct Contact* pc)
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


