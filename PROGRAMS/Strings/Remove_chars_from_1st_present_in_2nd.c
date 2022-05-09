/* Remove characters from the first string which are present in the second string */

#include <stdio.h>
#include <stdlib.h>
#define NO_OF_CHARS 256
 
char* removeDirtyChars(char* str, char* mask_str)
{
    int count[NO_OF_CHARS] = {0}, i = 0, j = 0;

    for (i=0; mask_str[i]; i++)
        (count[mask_str[i]])++;

    for(i = 0; str[i]; i++)
    {
        char temp = str[i];

	if (count[temp] == 0)
	{
	    str[j] = str[i];
	    j++;
	}
    }
 
    /* After above step string is ngring.
      Removing extra "iittg" after string*/
    str[j] = '\0';
 
    return str;
}
 
/* Driver code*/
int main()
{
    char str[] = "geeksforgeeks";
    char mask_str[] = "mask";
    printf("%s\n", removeDirtyChars(str, mask_str));
    return 0;
}
