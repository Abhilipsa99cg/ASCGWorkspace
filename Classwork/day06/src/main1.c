#include <common.h>
#include <empstruct.h>
void dispEmp(struct Employee E[], int n)
{
        int iv;
        for(iv = 0; iv < n; iv++)
        {
                printf("\n\t%d Employee details, \n", iv+1);

                printf("\n\tID: ");
                printf("%d", E[iv].eID);

                printf("\n\tName: ");
                printf("%s", E[iv].eName);

                printf("\n\tPhone: ");

               	printf("%d", E[iv].ePhone);

                printf("\n\tAddress: ");
                printf("%s", E[iv].eAddr);

                printf("\n\tDesignation: ");
                printf("%s", E[iv].eDesig);
        }
}

void getEmpDetails(struct Employee E[], int n)
{
        int iv;
        for(iv =0; iv<n; iv++)
        {
                printf("\n\t%d Employee details, \n", iv+1);

                printf("\n\tID: ");
                scanf("%d", &E[iv].eID);

                printf("\n\tName: ");
                scanf("%s", E[iv].eName);

                printf("\n\tPhone: ");
                scanf("%d", &E[iv].ePhone);

                printf("\n\tAddress: ");
                scanf("%s", E[iv].eAddr);

                printf("\n\tDesignation: ");
                scanf("%s", E[iv].eDesig);
        }
}

int findEmpDetails(struct Employee *E, char *tmpName, int n)
{
        int iv , flag=0;
        for(iv=0; iv<n; iv++)
        {
                if(strcmp(E[iv].eName,tmpName) == 0)
                {
                        flag = 1;
                        break;
                }

        }
        if(flag == 1)
                return 1;
        return 0;
}


int main()
{
	struct Employee *ePtr = NULL;
   	struct Employee *head = NULL;

	char tmpName[20];
	int NoofEmps;

	printf("\n\tEnter the number of Employee required: ");
	scanf("%d", &NoofEmps);

	head = (struct Employee *)malloc(NoofEmps* sizeof(struct Employee));
	ePtr = head;
	

	getEmpDetails(ePtr, NoofEmps);

	dispEmp(ePtr, NoofEmps);


	printf("\n\tEnter the name of Employee to be searched: ");
	scanf("%s", tmpName);

	if(findEmpDetails(ePtr,tmpName, NoofEmps)  == 0)
		printf("\n\tEmployee not found");
	else
		printf("\n\tEmployee found");

	printf("\n\n");
	return 0;
}
