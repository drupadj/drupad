// Count total bits in a number

/*


Input : 13
Output : 4
Binary representation of 13 is 1001

Input  : 183
Output : 8

Input  : 4096
Output : 13

*/

#include <stdio.h>          
     
unsigned int countBits(unsigned int n) 
{ 
   unsigned int count = 0; 
   while (n) 
   { 
        count++; 
        n >>= 1; 
    } 
    return count; 
} 
   
/* Driver program*/
int main() 
{ 
    int i = 3; 
    printf("%d", countBits(i)); 
    return 0; 
} 
