/*  0101 1010 101 pattern */

#include<stdio.h> 
 
int main()
{
    unsigned int n = 4;

    unsigned int num = n ^ (n >> 1);

    printf("%d\n", num);
    ((num + 1) & num) ? printf("No\n") : printf("Yes\n");
   
    return 0;       
}

