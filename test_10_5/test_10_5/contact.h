#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
#define INC_SZ 2

struct Peoinfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];
};

struct Contact
{
	struct Peoinfo* data;
	int sz;
	int capacity;
};


void Initcontact(struct Contact* pc);

void Addcontact(struct Contact* pc);

void Destorycontact(struct Contact* pc);

void Delcontact(struct Contact* pc);

void Searchcontact(const struct Contact* pc);

void Modifycontact(struct Contact* pc);

void Showcontact(const struct Contact* pc);

void Clearcontact(struct Contact* pc);

void Sortcontact(struct Contact* pc);




