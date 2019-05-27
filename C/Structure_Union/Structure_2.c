// How to assign a value to a pointer member of structure in C

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
 
 //structure variable
  Info MyInfo;
  
 //Allocate memory for integer
  MyInfo.piData =  malloc(sizeof(int));
  
  //check allocated memory
  if((MyInfo.piData) == NULL)
  {
   printf("FAIL TO ALLOCATE MEMORY\n");
   
   return 0;
  }
  
   // Copy 12 in piData
   *MyInfo.piData = 12;
   
   printf("MyInfo.piData = %d\n",*MyInfo.piData);
   
   
  //Allocate memory for pointer to char
  MyInfo.pcName = malloc(sizeof(char) * 12);
  
  //check allocated memory
  if((MyInfo.pcName) == NULL)
  {
   free(MyInfo.piData);
   
   printf("FAIL TO ALLOCATE MEMORY\n");
   
   return 0;
  }
  
  //Copy data in pcName
   strncpy(MyInfo.pcName,"Aticleworld", (*MyInfo.piData));
   
   printf("MyInfo.pcName = %s\n",MyInfo.pcName);
 
 
 
 //Free allocated memory
 free(MyInfo.piData);
 free(MyInfo.pcName);
 
 return 0;
}
