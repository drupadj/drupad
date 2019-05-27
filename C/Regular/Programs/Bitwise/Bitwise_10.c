// Write a program to count set bits in an integer?


#include <stdio.h>
 
#define CHAR_BITS  8  // size of character
#define INT_BITS  ( sizeof(int) * CHAR_BITS)
 
 
int main()
{
 unsigned int CountSetBits = 0; //Total number of bit set.
 
 unsigned int n = 0; //Variable that set bits you want to count
 
 printf("Enter the Number ");
 scanf("%d", &n);
 while (n)
 {
 CountSetBits += n & 1;
 n >>= 1;
 }
 
 printf("Number of 1 = %d", CountSetBits);
}
