// How to calculate the size of a structure in c?

#include <stdio.h>
 
 
typedef struct {
 
 char Name[12];
    int Age;
    float Weight;
    int RollNumber;    
    
}sStudentInfo;
 
 
 
int main(int argc, char *argv[]) 
{
 //create variable of the structure;
 sStudentInfo RamInfo;
 
 //Size of the structure
    printf("Size of structure  =  %d\n\n",sizeof(RamInfo));
 
}
