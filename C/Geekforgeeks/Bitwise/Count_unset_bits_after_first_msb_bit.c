// Given a number n, count unset bits after MSB (Most Significant Bit).

/*

Input : 17
Output : 3
Binary of 17 is 10001
so unset bit is 3

Input : 7
Output : 0

*/

#include <stdio.h> 
  
int countunsetbits(int n) 
{ 
    int count = 0;  

    for (int x = 1; x <= n; x = x<<1)  
        if ((n & x) == 0)
            count++;      
  
    return count;  

} 
  
int main() 
{ 
    int n = 0;
    printf ("Enter a number :");
    scanf ("%d",&n);

    printf("%d\n",countunsetbits(n));  
    return 0; 
} 
