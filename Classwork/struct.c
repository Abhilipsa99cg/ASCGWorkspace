#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	struct Employee
	{
		long eId;
		long ePhone;
		char eName[30];
		char eAddr[100];
		char eGender;
		char eDesignation[30];
	};

	struct Employee emp1,emp2;

	emp1.eId = 46282000;
	emp1.ePhone = 9337096394;
	strcpy(emp1.eName, "Abhilipsa");
	strcpy(emp1.eAddr, "Odisha");
	emp1.eGender = 'F';
	strcpy(emp1.eDesignation, "Analyst");

	emp2.eId = 46282001;
	emp2.ePhone = 7865499167;
	strcpy(emp2.eName, "Aprajita");
	strcpy(emp2.eAddr, "Bihar");
	emp2.eGender = 'F';
	strcpy(emp2.eDesignation, "Analyst");

	printf("Details of Employee 1:\n");

	printf("empId: %ld\n", emp1.eId);
	printf("ephone: %ld\n", emp1.ePhone);
	printf("ename: %s\n", emp1.eName);
	printf("eaddress: %s\n", emp1.eAddr);
	printf("egender: %c\n", emp1.eGender);
	printf("edesignation: %s\n", emp1.eDesignation);

	printf("Details of Employee 2:\n");

	printf("empId: %ld\n", emp2.eId);
	printf("ephone: %ld\n", emp2.ePhone);
	printf("ename: %s\n", emp2.eName);
	printf("eaddress: %s\n", emp2.eAddr);
	printf("egender: %c\n", emp2.eGender);
	printf("edesignation: %s\n", emp2.eDesignation);
}
