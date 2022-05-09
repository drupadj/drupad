#include<stdio.h>
#include<string.h>

int main ()
{
    char src[10];
    int i = 0, j = 0, temp = 0;

    printf("Enter a string :");

    scanf("%s", src);

    i = strlen(src);

    printf("%d\n", i);
    for(i = i - 1, j = 0; i > j; i--, j++)
    {
        temp = src[i];
	src[i] = src[j];
	src[j] = temp;
    }

    printf("DES string %s\n", src);

    return 0;
}
