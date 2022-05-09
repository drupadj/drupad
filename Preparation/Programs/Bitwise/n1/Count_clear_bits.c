/* Write an efficient program to count number of 1s in binary representation of an integer */

#define ALL_BITS

#include <stdio.h>        
  
unsigned int countSetBits(unsigned int n) 
{ 
  unsigned int count = 0; 
  while (n) 
  {
#ifdef ALL_BITS 
    count = count + (n & 1); 
#else
    count = count + ((n & 1) == 0);
#endif

    n = n >> 1;
  }
#ifdef ALL_BITS
  return (32 - count);
#else
  return count;
#endif
} 
  
int main() 
{ 
    int i = 0;

    printf("Enter number :");

    scanf("%d", &i);

    printf("%d\n", countSetBits(i)); 
    return 0; 

} 
