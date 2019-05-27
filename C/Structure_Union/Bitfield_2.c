#include <stdio.h>
 
struct sData
{
   unsigned int a: 2;
   unsigned int b: 2;
   unsigned int c: 2;
};
 
 
int main()
{
   struct sData data;
   
   data.a = 5;
   
   printf("%d", data.a );
   
   return 0;
}
