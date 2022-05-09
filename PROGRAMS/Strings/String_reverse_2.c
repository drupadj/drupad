#include<stdio.h>
#include<string.h>

int main ()
{
    char src[10], des[10];
    int i = 0, j = 0;

    printf("Enter a string :");

    scanf("%s", src);

    i = strlen(src);

    for(i = i - 1, j = 0; i >= 0; i--, j++) 
            des[j] = src[i];

    des[j] = '\0';

    printf("SRC string %s DES string %s\n", src, des);

    return 0;
}
