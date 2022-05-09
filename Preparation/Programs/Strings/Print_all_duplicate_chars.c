#include <stdio.h>
#define NO_OF_CHARS 256
 
char Print_all_duplicate_chars(char *str)
{
    /* count number of occurrences of every character */
    int count[NO_OF_CHARS] = {0}, i;
    for (i=0; str[i]; i++)
        (count[str[i]])++;
 
    for (i = 0; i < NO_OF_CHARS; i++)
    {
        if (count[i] > 1)
        {
	    printf("Duplicate char %c is called %d times", i, count[i]);
	    printf("\n");
        }
    }
}
 
int main()
{
  char str[] = "geeksforgeeks";

  Print_all_duplicate_chars(str);

  return 0;
}
