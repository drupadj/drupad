// Check whether the two numbers differ at one bit position only

/*

Input : a = 13, b = 9
Output : Yes
(13)10 = (1101)2
(9)10 = (1001)2
Both the numbers differ at one bit position only, i.e,
differ at the 3rd bit from the right.

Input : a = 15, b = 8
Output : No

*/

#include <stdio.h> 

int main() 
{ 
    int a = 0, b = 0, num = 0; 

    printf ("Enter 2 numbers :");
    scanf ("%d %d",&a, &b);

    num = a ^ b;
    num & num - 1 ? printf("No\n") : printf("Yes\n");

    return 0; 
} 
