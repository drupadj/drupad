// First lowest set bit number

#include<stdio.h>

int lowestsetBit(int n)
{
    return n & (-n);
}

int main()
{
    int n = 0;

    printf ("Enter a number :");
    scanf ("%d", &n);
    printf("%d\n",lowestsetBit(n));

    return 0;
}

