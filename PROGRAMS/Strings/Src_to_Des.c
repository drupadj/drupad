#include<stdio.h>

int main ()
{
    char src[10], des[10];
    int i = 0;

    printf("Enter a string :");

    scanf("%s", src);

    for(i = 0; src[i]; i++)
        des[i] = src[i];

    des[i] = '\0';

    printf("SRC string %s DES string %s\n", src, des);

    return 0;
}
