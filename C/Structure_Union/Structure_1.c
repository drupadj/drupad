//  How to access pointer member of structure in C

#include<stdio.h>
 
typedef struct
{
 int iLen;
 
 char *pcName;
 
}Info;
 
 
int main()
{
 
 //structure variable
  Info MyInfo = { 11,  "Aticleworld"};
  
 //pointer to structure
 Info *ptrMyInfo = &MyInfo;
 
 //Used arraw operator
 printf("ptrMyInfo->pcName = %s\n\n",ptrMyInfo->pcName);
 
 
 //Used dot operator
 printf("PMyInfo.pcName = %s\n",MyInfo.pcName);
 
 return 0;
}
