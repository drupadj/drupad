#include<string.h>
#include<stdio.h>
#include<stdlib.h>
 
// A structure to store employe information
typedef struct EmpInformation
{
  int Emp_id;
  int Salary;
  char Address[];
}sEmpInformation;
 
typedef sEmpInformation* psEmpInformation;
 
 
 
// Allocate the memory and initialize the structure
psEmpInformation ComposeEmpInfo( int salary,int id, const char *pcAddress)
{
    // Allocating memory as per the requirements
    psEmpInformation psEmpInfo = malloc( sizeof(*psEmpInfo) + sizeof(char) * strlen(pcAddress) + 1);
    if(psEmpInfo != NULL)
    {
        psEmpInfo->Emp_id = id;
        psEmpInfo->Salary = salary;
        strcpy(psEmpInfo->Address, pcAddress);
    }
    return psEmpInfo;
}
 
// Print student details
void printEmpInfo(psEmpInformation psEmpInfo)
{
    printf("Emp_id : %d \
            Salary : %d  \
            Address: %s\n",
            psEmpInfo->Emp_id,psEmpInfo->Salary,psEmpInfo->Address,sizeof(psEmpInfo));
 
}
 
// Driver main Code
int main()
{
     psEmpInformation Amlendra = ComposeEmpInfo(1,100013, "Preet vihar street-abcd ,block abcxyz, New Delhi, India");
 
     if(Amlendra != NULL)
     {
        printEmpInfo(Amlendra);
        free(Amlendra);
     }
 
     psEmpInformation Aticleworld = ComposeEmpInfo(13,200013, "New Delhi, India");
 
     if(Aticleworld != NULL)
     {
        printEmpInfo(Aticleworld);
        free(Aticleworld);
     }
 
     return 0;
}
