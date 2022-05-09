#include<stdio.h> 
#include<string.h>

#define NO_OF_CHARS 256

void sortString(char str[])
{
    int count[NO_OF_CHARS] = {0}, i, len = strlen(str) -1;

    for (i=0; str[i]; i++)
        (count[str[i]])++;
 
    // Traverse string and increment
    // count of characters
    for (i = 0; i < len; i++)
    { 
        // 'a'-'a' will be 0, 'b'-'a' will be 1,
        // so for location of character in count
        // array we will do str[i]-'a'.
        count[str[i]-'a']++;
    }
    // Traverse the hash array and print
    // characters
    for (i = 0; i < NO_OF_CHARS; i++)
    {
        for (int j = 0; j < count[i]; j++)
            printf("%c ", 'a' + i);
    }

    printf("\n");

}
 
int main()
{
    char s[] = "geeksforgeeks";   
    sortString(s);   
    return 0;
}
