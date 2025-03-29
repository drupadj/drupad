#include<stdio.h>
#include<string.h>

char *reverseString(char *str)
{
    int start = 0, end = strlen(str) - 1;

    while(start < end)
    {
        str[start] = str[start] ^ str[end];
        str[end] = str[start] ^ str[end];
        str[start] = str[start] ^ str[end];
	start++;
	end--;
    }

    return str;
}

int main()
{
    char s[10] = "Hello";

    int start = 0, end = strlen(s) - 1;

    printf("%s\n", reverseString(s));
}
