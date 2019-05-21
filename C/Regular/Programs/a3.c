// Recursive
#include <stdio.h>

int sumDigits(int no) 
{ 
   return no == 0 ? 0 : no%10 + sumDigits(no/10) ; 
} 
  
int main(void) 
{ 
    printf("%d", sumDigits(687)); 
    return 0; 
} 

