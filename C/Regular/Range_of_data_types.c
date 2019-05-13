#include <stdio.h>
 
#define BITS(x) (sizeof(x) * 8 )
 
 
//Print Range of signed int
void SignedRange(unsigned int bits)
{
  int min = 0;
  int max = 0;
  
  min = - (1L <<(bits-1)); //Min value Equivalent to -2^(n-1)
  
  max =  ((1L <<(bits-1)) -1); //Max Value (2^(n-1)) -1
  
  printf("%d to %u\n\n",min,max);
}
 
 
//Print range of unsigned int
void UnsignedRange(unsigned int bits)
{
   unsigned int min = 0; //For unsigned min always 0
   unsigned long long  max = 0;
   
   max = ((1LLU << bits) - 1); //Equivalent to (2^n) -1
    
   printf(" %u to %llu\n\n", min, max);
}
 
 
int main()
{
     
    printf("\n  char Range => ");
    SignedRange(BITS(char));
    
    printf("\n  unsigned char Range =>");
    UnsignedRange(BITS(unsigned char));
    
    printf("\n  short Range => ");
    SignedRange(BITS(short));
    
    printf("\n  unsigned short Range => ");
    UnsignedRange(BITS(unsigned short));
    
    printf("\n  int Range => ");
    SignedRange(BITS(int));  
    
    printf("\n  unsigned int Range => ");
    UnsignedRange(BITS(unsigned int));
    
    
 return 0;
}
