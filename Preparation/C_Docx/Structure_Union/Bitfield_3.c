#include <stdio.h>
 
// A structure without forced alignment
typedef struct
{
   unsigned int data1: 5;
   unsigned int data2: 8;
}sData1;
 
 
// A structure with forced alignment
typedef struct
{
   unsigned int data1: 5;
   unsigned int: 0;
   unsigned int data2: 8;
}sData2;
 
 
int main()
{
   printf("Size of sData1 = %d\n", sizeof(sData1));
   
   printf("Size of sData2 = %d\n", sizeof(sData2));
   
   return 0;
}

// Size of sData1 = 4
// Size of sData2 = 8
