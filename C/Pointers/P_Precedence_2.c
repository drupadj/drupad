
// PROGRAM 2 
#include <stdio.h> 
int main(void) 
{ 
    int arr[] = {10, 20}; 
    int *p = arr; 
    *p++; 
    printf("arr[0] = %d, arr[1] = %d, *p = %d", 
                          arr[0], arr[1], *p); 
    return 0; 
} 

// arr[0] = 10, arr[1] = 20, *p = 20