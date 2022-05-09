// Write an efficient program to count number of 1s in binary representation of an integer.

#include <stdio.h>        
  
unsigned int countSetBits(unsigned int n) 
{ 
  unsigned int count = 0; 
  while (n) 
  { 
    count = count + (n & 1); 

    n = n >> 1;
  } 
  return count; 
} 
  
int main() 
{ 
    int i = 0;

    printf("Enter number :");

    scanf("%d", &i);

    printf("%d\n", countSetBits(i)); 
    return 0; 
} 
