#include<stdio.h>

int main()
{
    int num = 0;

    printf("Enter a number :");

    scanf("%d", &num);

    num = num - 1;

    (num & num - 1) ? printf("No\n") : printf("Yes\n");

    return 0;
}
