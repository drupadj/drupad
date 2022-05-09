#include <stdio.h>
#include<string.h>
 
char *removeDuplicate(char str[])
{
   // Used as index in the modified string
   int index = 0, n = strlen(str - 1), j;  
    
   // Traverse through all characters
   for (int i = 0; i < n; i++) {
        
     // Check if str[i] is present before it 
     for (j = 0; j < i; j++)
        if (str[i] == str[j])
           break;
      
     // If not present, then add it to
     // result.
     if (j == i)
        str[index++] = str[i];
   }
    
   return str;
}
 
int main()
{
   char str[]= "geeksforgeeks";
   printf("%s\n", removeDuplicate(str));
   return 0;
}
