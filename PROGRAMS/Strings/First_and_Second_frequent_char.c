#include <stdio.h>
#define NO_OF_CHARS 256
 
char getSecondMostFreq(char *str)
{
    /* count number of occurrences of every character */
    int count[NO_OF_CHARS] = {0}, i;
    for (i=0; str[i]; i++)
        (count[str[i]])++;
 
    /* Traverse through the count[] and find second highest element */
    int first = 0, second = 0;
    for (i = 0; i < NO_OF_CHARS; i++)
    {
        /* If current element is greater than first then update both first and second */
        if (count[i] > count[first])
        {
            second = first;
            first = i;
        }
 
        /* If count[i] is in between first and second then update second  */
        else if (count[i] > count[second] && count[i] < count[first])
            second = i;
    }
 
    return second;
}
 
// Driver program to test above function
int main()
{
  char str[] = "geeksforgeeks";
  char res = getSecondMostFreq(str);
  if (res != '\0')
     printf("Second most frequent char is %c\n", res);
  else
     printf("No second most frequent character");
  return 0;
}
