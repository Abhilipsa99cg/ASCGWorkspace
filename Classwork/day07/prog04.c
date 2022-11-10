#include <stdio.h>
#include <string.h>


struct EmpDetails
{
    int eID;
    char eName[20];
};

typedef union UEmpDetails
{
    int eID;
    char eName[20];
}UEMP;



int main()
{
    struct EmpDetails e1; 
    union UEmpDetails e2; 
    UEMP e3; 

    printf("\nSize of the EmpDetails: %ld", sizeof(struct EmpDetails));
    printf("\nSize of the EmpDetails1: %ld", sizeof(union UEmpDetails));

    e1.eID =1001;
    strcpy(e1.eName,"Abhilipsa");

    printf("\nName: %s",e1.eName);
    printf("\nID: %d",e1.eID);


    e2.eID =1001;
    printf("\nID: %d",e2.eID);

    strcpy(e2.eName,"Abhilipsa");

    printf("\nName: %s",e2.eName);
    





    printf("\n\n");

    return 0;
}

