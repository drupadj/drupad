/* Find most significant set bit of a number */

/* Highest power of 2 less than or equal to given number */

#include<stdio.h>
 
unsigned int PrevPowerOf2(unsigned int n)
{
    unsigned count = 0;
 
    while(n)
    {
        n >>= 1;
        count++;
    }

    count = count - 1;

    return 1 << count;
}
 
int main()
{
    unsigned int n = 0;

    printf("Enter a number :");

    scanf("%d", &n);

    printf("%d\n", PrevPowerOf2(n));

    return 0;
}

// n = 17
