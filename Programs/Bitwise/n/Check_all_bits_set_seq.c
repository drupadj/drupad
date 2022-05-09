// Check if all bits of a number are set
// Check if all bits are unset

#include <stdio.h> 

int main() 
{ 
    int n = 0; 
    printf ("Enter a number :");
    scanf ("%d", &n);

    if (((n + 1) & n) == 0)
	printf ("All bits are set\n"); 
    else
	printf ("All bits are not set\n");
    return 0; 
} 
