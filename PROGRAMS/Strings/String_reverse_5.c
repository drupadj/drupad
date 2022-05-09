#include <stdio.h>
#include<string.h>
#include<stdlib.h>

void preserveSpace(char str[])
{
    int n = strlen(str);
 
    int start = 0;
    int end = n - 1;
 
    // Move both pointers toward each other
    while (start < end) {
 
        // If character at start or end is space,
        // ignore it
        if (str[start] == ' ') {
            start++;
            continue;
        }
        else if (str[end] == ' ') {
            end--;
            continue;
        }
 
        // If both are not spaces, do swap
        else {
	    char temp = str[start];
	    str[start] = str[end];
	    str[end] = temp;
            start++;
            end--;
        }
    }
}
 
int main()
{
    char str[] = "internship at geeks for geeks";
    preserveSpace(str);
    printf("%s\n", str);
    return 0;
}
