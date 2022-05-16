#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
typedef struct
{
 
 int *piData;
 
 char *pcName;
 
}Info;
 
 
int main()
{
 
 //pointer to structure
  Info *ptrMyInfo = NULL;
  
  //Assign memory to the pointer
  ptrMyInfo = malloc(sizeof(Info));
  
  //check allocated memory
  if((ptrMyInfo) == NULL)
  {
   printf("FAIL TO ALLOCATE MEMORY\n");
   
   return 0;
  }
  
  
 //Allocate memory for integer
  ptrMyInfo->piData =  malloc(sizeof(int));
  
  //check allocated memory
  if((ptrMyInfo->piData) == NULL)
  {
   free(ptrMyInfo);
   printf("FAIL TO ALLOCATE MEMORY\n");
   
   return 0;
  }
  
   // Copy 12 in piData
   *ptrMyInfo->piData = 12;
   
   printf("ptrMyInfo.piData = %d\n",*ptrMyInfo->piData);
   
   
  //Allocate memory for pointer to char
  ptrMyInfo->pcName = malloc(sizeof(char) * 12);
  
  //check allocated memory
  if((ptrMyInfo->pcName) == NULL)
  {
   free(ptrMyInfo->piData);
   free(ptrMyInfo);
   
   printf("FAIL TO ALLOCATE MEMORY\n");
   
   return 0;
  }
  
  //Copy data in pcName
   strncpy(ptrMyInfo->pcName,"Aticleworld", (*ptrMyInfo->piData));
   
   printf("ptrMyInfo.pcName = %s\n",ptrMyInfo->pcName);
 
 
 
 //Free allocated memory
 free(ptrMyInfo->piData);
 free(ptrMyInfo->pcName);
 free(ptrMyInfo);
 
 return 0;
}
