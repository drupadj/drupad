#include<stdio.h>
 
unsigned int nextPowerOf2(unsigned int n)
{
    unsigned count = 0;
 
    while(n)
    {
        n >>= 1;
        count++;
    }

    return 1 << count;
}
 
int main()
{
    unsigned int n = 0;

    printf("Enter a number :");

    scanf("%d", &n);

    printf("%d\n", nextPowerOf2(n));

    return 0;
}

// n = 17
