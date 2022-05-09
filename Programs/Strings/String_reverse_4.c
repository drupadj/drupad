/* C program to reverse a string with special characters */
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
// Returns true if x is an alphabetic character, false
// otherwise
bool isAlphabet(char x)
{
    return ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'));
}
 
void reverse(char str[])
{
    int r = strlen(str) - 1, l = 0;
 
    while (l < r) {
        // Ignore special characters
        if (!isAlphabet(str[l]))
            l++;
        else if (!isAlphabet(str[r]))
            r--;
        // Both str[l] and str[r] are not special
        else {
            char temp = str[l];
            str[l] = str[r];
            str[r] = temp;
	    l++;
	    r--;
        }
    }
}
 
int main()
{
    char str[] = "a!!!b.c.d,e'f,ghi";
    printf("Input string: %s\n", str);
    reverse(str);
    printf("Output string: %s\n", str);
    return 0;
}
