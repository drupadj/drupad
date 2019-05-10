/* Functions that are executed before and after main() in C */

#include<stdio.h> 
  
void myStartupFun (void) __attribute__ ((constructor)); 
  
  
void myCleanupFun (void) __attribute__ ((destructor)); 
  
  
void myStartupFun (void) 
{ 
    printf ("startup code before main()\n"); 
} 
  
void myCleanupFun (void) 
{ 
    printf ("cleanup code after main()\n"); 
} 
  
int main (void) 
{ 
    printf ("hello\n"); 
    return 0; 
} 

