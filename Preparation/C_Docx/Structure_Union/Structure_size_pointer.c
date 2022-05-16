#include <stdio.h>
#include <stdlib.h>
 
 
typedef struct {
 
 char Name[12];
    int Age;
    float Weight;
    int RollNumber;    
    
}sStudentInfo;
 
 
 
int main(int argc, char *argv[]) 
{
 
 //Create pointer to the structure
 sStudentInfo *psInfo  = NULL;
 
 //Increment the pointer
    psInfo++;
    
    printf("Size of structure  =  %u\n\n",psInfo);
 
}
