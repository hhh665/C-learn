#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_NAME 5
#define MAX_TELE 12
#define MAX_ADDR 30

struct Peoinfo
{
	char name[MAX_NAME];
	char sex[MAX_NAME];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];
};

struct Contact
{
	struct Peoinfo data[MAX];
	int sz;
};


void Initcontact(struct Contact* pc);

void Addcontact(struct Contact* pc);

void Delcontact(struct Contact* pc);

void Searchcontact(struct Contact* pc);

void Modifycontact(struct Contact* pc);

void Showcontact(struct Contact* pc);

void Clearcontact(struct Contact* pc);

void Sortcontact(struct Contact* pc);




