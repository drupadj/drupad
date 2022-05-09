#include<stdio.h>

void removeSpaces(char *str)
{
    int count = 0;
 
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; // here count is
                                   // incremented
    str[count] = '\0';
}
 
int main()
{
    char str[] = "g  eeks   for ge  eeks  ";
    removeSpaces(str);
    printf("%s\n", str);
    return 0;
}
