#include <common.h>
#include <empstruct.h>

int main()
{
        struct Employee *ePtr = NULL;
        struct Employee *head = NULL;


	int it;

        int NoofEmps;

        printf("\n\tEnter the number of Employee required: ");
        scanf("%d", &NoofEmps);

        head = (struct Employee *)malloc(NoofEmps* sizeof(struct Employee));
        ePtr = head;

	for(it = 0; it < NoofEmps; it++,ePtr++)
        {
                printf("\n\t%d Employee details, \n", it+1);

                printf("\n\tID: ");
                scanf("%d", &ePtr->eID);

                printf("\n\tName: ");
                scanf("%s", ePtr->eName);

                printf("\n\tPhone: ");
                scanf("%d", &ePtr->ePhone);

                printf("\n\tAddress: ");
                scanf("%s", ePtr->eAddr);

                printf("\n\tDesignation: ");
                scanf("%s", ePtr->eDesig);
        }

	ePtr = head;

	
	for(it = 0; it < NoofEmps; it++,ePtr++)
        {
                printf("\n\t%d Employee details, \n", it+1);

                printf("\n\tID: ");
                printf("%d", ePtr->eID);

                printf("\n\tName: ");
                printf("%s", ePtr->eName);

                printf("\n\tPhone: ");
                printf("%d", ePtr->ePhone);

                printf("\n\tAddress: ");
                printf("%s", ePtr->eAddr);

                printf("\n\tDesignation: ");
                printf("%s", ePtr->eDesig);
        }

	printf("\n\n");
	return 0;
}


