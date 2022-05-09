#include<stdio.h> 

int main()
{
    int num1 = 0, num2 = 0;

    printf("Enter num 1 :");

    scanf("%d", &num1);

    printf("Enter num 2 :");

    scanf("%d", &num2);

    num1 ^ num2 ? printf("Not equal\n") : printf("Equal\n");
}
