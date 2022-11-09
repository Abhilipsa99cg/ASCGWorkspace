/**************************************************************************************************************************
 * * FILENAME : assign5b.c
 * *
 * * DESCRIPTION : This file contains the function to get name and age of people and display the last person's record.
 * *
 * * REVISION HISTORY : 
 * * DATE                  NAME                    REFERENCE                           REASON
 * * ------------------------------------------------------------------------------------------------------------------------
 * * 08 Nov 2022          ABHILIPSA SWAIN           NEW                               NEW CODE TO PERFORM OPERATIONS
 * *
 * **************************************************************************************************************************/

#include "common.h"

struct person *ptr;
struct person *ptr2;
struct person
{
	int age;
	float weight;
	char name[MAX];
};

/***************************************************************************************************************************
 * * FUNCTION NAME : readPerson()
 * * 
 * * DESCRIPTION : It reads the details of the Person like name and age.
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * *************************************************************************************************************************/

void readPerson(int n)
{
	ptr = (struct person*) malloc(n * sizeof(struct person));

	if(ptr != NULL)
	{
		for(int i = 0; i < n; ++i)
		{
			printf("Enter the name and age respectively: ");
			scanf("%s %d", (ptr + i) -> name, &(ptr + i) -> age);
		}
	}
}

/***************************************************************************************************************************
 * * FUNCTION NAME : display()
 * *
 * * DESCRIPTION : It displays the details of the Person like name and age.
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * *************************************************************************************************************************/

void display(int n)
{
	printf("Displaying information:\n");

	for(int i = 0; i < n; ++i)
	{
		printf("Name: %s\tAge: %d\n", (ptr + i) -> name, (ptr + i) -> age);
	}
}

/***************************************************************************************************************************
 * * FUNCTION NAME : copy()
 * *
 * * DESCRIPTION : It copies the details of the last Person like name and age.
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * *************************************************************************************************************************/

void copy(int n)
{
	printf("last person's record: \n");

	printf("Name: %s\tAge: %d\n", (ptr + (n-1))-> name, (ptr + (n-1))-> age);
}

/***************************************************************************************************************************
 * * FUNCTION NAME : freeMemory()
 * *
 * * DESCRIPTION : It free the allocated memory space.
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * *************************************************************************************************************************/

void freeMemory()
{
	printf("releasing allocated memory\n");
	free(ptr);
	ptr = NULL;
	printf("all allocated memory released\n");
}

/***************************************************************************************************************************
 * * FUNCTION NAME : main()
 * *
 * * DESCRIPTION : Here all other defined functions are called.
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * *************************************************************************************************************************/

int main()
{
	int n = 0;
	printf("Enter the number of persons: ");
	scanf("%d", &n);
	readPerson(n);
	display(n);
	copy(n);
	freeMemory();
	return EXIT_SUCCESS;
}
