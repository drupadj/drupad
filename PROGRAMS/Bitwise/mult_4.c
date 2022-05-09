// Multiply any Number with 4 using Bitwise Operator

#include <stdio.h> 
  
int multiplyWith4(int n) 
{ 
    return (n << 2); 
} 
  
int main() 
{ 
    int n = 0; 
    printf ("Enter a number:");
    scanf ("%d",&n);
    printf ("After multiply the number is = %d\n",(multiplyWith4(n)));
    return 0; 
} 
