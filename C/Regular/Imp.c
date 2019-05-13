#include <stdio.h>
 
int main(void)
{
 int * piData;
 
 {  //block
   int Data = 27;
   piData = &Data;
 }
 
 printf("piData = %d\n", *piData);
 
 return 0;
}
