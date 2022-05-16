/*


Get the stack size and set the stack size of thread attribute in C

size of stack 
int pthread_attr_getstacksize(const pthread_attr_t* restrict attr, 
                                          size_t* restrict stacksize); 
  
to set size of stack 
int pthread_attr_setstacksize(pthread_attr_t* attr, size_t stacksize); 

pthread_attr_getstacksize() :
It is use for get threads stack size. The stacksize attribute gives the minimum stack size allocated to threads stack. When successfully run then it gives 0 otherwise gives any value.

First argument – It takes pthread attribute.
Second argument – It takes a variable and give the size of the thread attribute.

pthread_attr_setstacksize() :
It is use for set new threads stack size. The stacksize attribute gives the minimum stack size allocated to threads stack. When successfully run then it gives 0 otherwise if error gives any value.


First argument – It takes pthread attribute.
Second argument – It takes the size of new stack (In bytes)

*/



#include <stdio.h> 
#include <stdlib.h> 
#include <pthread.h> 
  
int main() 
{ 
  
    // for takes the size of threads stack 
    size_t stksize; 
  
    // attribute declaration 
    pthread_attr_t atr; 
  
    // it gets the threads stack size and give  
    // value in stksize variable 
    pthread_attr_getstacksize(&atr, &stksize); 
  
    // print the current threads stack size 
    printf("Current stack size - > %d\n", stksize); 
  
    // then set the new threads stack size 
    pthread_attr_setstacksize(&atr, 320000034); 
    pthread_attr_getstacksize(&atr, &stksize); 
  
    // print the new stack size 
    printf("New stack size-> %d\n", stksize); 
    return 0; 
} 

/* 

Current stack size - > 4196464
New stack size-> 320000034

*/

