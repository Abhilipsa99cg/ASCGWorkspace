#ifndef _EMPSTRUCT_H
#define _EMPSTRUCT_H

#include <common.h>

struct Employee
{
	int eID;
	char eName[BUFF];
	char eAddr[BUFF];
	int ePhone;
	char eDesig[BUFF];
};

void dispEmp(struct Employee[], int);

void getEmpDetails(struct Employee[], int);

int findEmpDetails(struct Employee[], char *, int);

#endif
