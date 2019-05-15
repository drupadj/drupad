// Return multiple values from the function using the array

#include <stdio.h>
#include <stdlib.h>
 
#define ARRAY_SIZE  10
 
// Function to get n odd numbers
 
int * collectOddNumbers(const int n)
{
    int i =0; //Integer variable
    
    int *ptr = NULL; //Integer pointer
    
    //Allocate the memory
    ptr = malloc(sizeof(int)*n); 
    
    //Check allocated memory
    if(ptr == NULL)  
    return NULL;
 
    for (i = 0; i < n; i++)
    {
        // Calculate and store even number in numbers
        *(ptr + i) =  ((i*2) + 1);
    }
 
    return ptr;
}
 
 
int main()
{
 //integer variable
    int index = 0;
    
    //integer pointer
    int *oddNumbers = NULL; 
 
    //Get first 10 odd numbers
    oddNumbers = collectOddNumbers(ARRAY_SIZE);
 
    // Print all 10 odd numbers
    for (index = 0; index < ARRAY_SIZE; ++index)
    {
        printf("%d ", oddNumbers[index]);
    }
    
    //free allocated memory
    free(oddNumbers);
    oddNumbers = NULL;
    
    return 0;
}
