// C Program to find direction of growth of stack


/*


In a typical process, a stack segment of program contains local variables along with information that is saved each time a function is called. Each time a function is called, the address of where to return to and certain information about the caller’s environment, such as some of the machine registers, are saved on the stack. The newly called function then allocates room on the stack for its automatic and temporary variables.

Stack may grow downward or upward depending on environment for which code is compiled, i.e., depends on compiler. How to know whether stack grows downward or upward? 


*/

/* 

The idea is to do following :
1) Make a local variable in main.
2) Write another function fun() with its own local variable.
3) Make a call to fun() from main. Compare addresses of two local variable. If address of fun()’s local variable is more than main’s local variable, then stack grows upward (i.e., addresses increase)

*/


// C program to check whether stack grows 
// downward or upward. 
#include<stdio.h> 
  
void fun(int *main_local_addr) 
{ 
    int fun_local; 
    if (main_local_addr < &fun_local) 
        printf("Stack grows upward\n"); 
    else
        printf("Stack grows downward\n"); 
} 
  
int main() 
{ 
    // fun's local variable 
    int main_local; 
  
    fun(&main_local); 
    return 0; 
} 

