// C program to illustrate the 
// concept of Nested function. 
#include <stdio.h> 
int main(void) 
{ 
    printf("Main"); 
    int fun() 
    { 
        printf("fun"); 
  
        // defining view() function inside fun() function. 
        int view() 
        { 
            printf("view"); 
        } 
        return 1; 
    } 
    view(); 
} 

