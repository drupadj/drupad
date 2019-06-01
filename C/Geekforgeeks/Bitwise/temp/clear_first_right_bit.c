// Clear the first rightmost on bit

#include<stdio.h>

int clearRightmostsetBit(int n)
{
    return n & (n-1);
}

int main()
{
    int n = 0;

    printf ("Enter a number :");
    scanf ("%d", &n);
    printf("%d\n",clearRightmostsetBit(n));

    return 0;
}

