/*  0101 1010 101 pattern */

#include<stdio.h> 
 
int main()
{
    unsigned int n = 21;

    unsigned int num = n ^ (n >> 1);

    ((num + 1) & num) ? printf("No\n") : printf("Yes\n");
   
    return 0;       
}

