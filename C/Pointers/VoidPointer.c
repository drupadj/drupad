#include <stdio.h>
 
int main(int argc, char *argv[]) 
{
 
void *pvData;
 
int iData = 10;
char cData = 'A';
float fData = 27.6;
 
//Assigning address of character
pvData = &cData;
 
//dereferencing void pointer with character typecasting
printf("cData = %c\n\n",*((char*)pvData));
 
 
 
//Assigning address of integer
pvData = &iData;
 
//dereferencing void pointer with integer typecasting
printf("iData = %d\n\n",*((int *)pvData));
 
 
 
//Assigning address of float
pvData = &fData;
 
//dereferencing void pointer with float typecasting
printf("fData = %f\n\n",*((float *)pvData));
 
return 0;
}
