#include <stdio.h>
#include <string.h>
 
 
int main(int argc, char *argv[]) 
{
 char acData[5];
 int iLoop = 0;
 int iArraySize = sizeof(acData);
 
 //Assign 0 to each block of the array
 memset(acData,0, iArraySize);
 
 //print the stored data
 for(iLoop=0;iLoop <iArraySize; iLoop++)
 {
 printf("\n acData[%d] = %d ",iLoop, acData[iLoop]);
 
 } 
 return 0;
}
