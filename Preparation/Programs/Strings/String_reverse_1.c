/* C Program to reverse a string without using temp variable */
#include<stdio.h>
#include<string.h>

/* Function to reverse string and return reversed string */
char* ReverseString(char *str, int start, int end)
{

    // Iterate loop upto start not equal to end
    while (start < end)
    {
        // XOR for swapping the variable
        str[start] ^= str[end];
        str[end] ^= str[start];
        str[start] ^= str[end];
 
        ++start;
        --end;
    }

    return str;
}
 
int main()
{
    char s[20];

    printf("Enter a string : ");
    scanf("%s", s);

    int start = 0, end = strlen(s) - 1;

    printf("%s\n", ReverseString(s, start, end));

    return 0;
}
