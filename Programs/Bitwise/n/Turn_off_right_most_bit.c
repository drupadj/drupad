// Clear the first rightmost on bit
#include <stdio.h> 
  
int fun(unsigned int n) 
{ 
    return n & (n - 1); 
} 
  
int main() 
{ 
    int n = 7;

    printf("%d\n", fun(n));

    return 0; 
} 

