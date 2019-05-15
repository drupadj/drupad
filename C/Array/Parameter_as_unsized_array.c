#include <stdio.h>
 
//Size of the created array
#define ARRAY_SIZE  8
 
void ReadArray(int acData[])
{
 int index = 0;
 
 for(index= 0; index < ARRAY_SIZE; ++index)
 {
 printf("%d\n",acData[index]);
 
 }
}
 
 
 
int main(int argc, char *argv[]) 
{
 //Create an array
 int aiData[ARRAY_SIZE] = {1,2,3,4,5,6,7,8}; 
 
  //Pass array as a parameter
  ReadArray(aiData);
  
 return 0;
}
