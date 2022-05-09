#include<stdio.h>

int main()
{
    int num = 0;

    printf("Enter a number :");

    scanf("%d", &num);

    (num & num - 1) ? printf("Num is not power of 2\n") : printf("Num is power of 2\n");

    return 0;
}
