// C program to get toggle case of a string 

#include <stdio.h> 
  
// tOGGLE cASE = swaps CAPS to lower 
// case and lower case to CAPS 

char *toggleCase(char *a) 
{ 
    for ( int i=0; a[i]!='\0'; i++) { 
  
        // Bitwise EXOR with 32 
        a[i] ^= 32; 
    } 
  
    return a; 
} 
  
int main() 
{ 
    char str[10];
    printf ("Enter a string :");
    scanf ("%s",str);
    printf("Toggle case: %s\n", toggleCase(str)); 
    return 0; 
} 

