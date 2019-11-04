/*

A simple solution is to start from the first character, count its occurrences, then second character and so on. While counting these occurrence keep track of max and second max. Time complexity of this solution is O(n2).
We can solve this problem in O(n) time using a count array with size equal to 256 (Assuming characters are stored in ASCII format)

*/


#include <stdio.h> 
#define NO_OF_CHARS 256 
  
// C function to find the second most frequent character 
// in a given string 'str' 
char getSecondMostFreq(char *str) 
{ 
    // count number of occurrences of every character.  
    int count[NO_OF_CHARS] = {0}, i; 
    for (i=0; str[i]; i++) 
        (count[str[i]])++; 
  
    // Traverse through the count[] and find second highest element. 
    int first = 0, second = 0; 
    for (i = 0; i < NO_OF_CHARS; i++) 
    { 
        /* If current element is smaller than first then update both 
          first and second */
        if (count[i] > count[first]) 
        { 
            second = first; 
            first = i; 
        } 
  
        /* If count[i] is in between first and second then update second  */
        else if (count[i] > count[second] && 
                 count[i] != count[first]) 
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
     printf("Second most frequent char is %c", res); 
  else
     printf("No second most frequent character"); 
  return 0; 
} 

