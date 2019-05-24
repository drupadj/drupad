// Write a C program that does not terminate when Ctrl+C is pressed

/*

SIGABRT – abnormal termination.
SIGFPE – floating point exception.
SIGILL – invalid instruction.
SIGINT – interactive attention request sent to the program.
SIGSEGV – invalid memory access.
SIGTERM – termination request sent to the program.

*/

#include <stdio.h> 
#include <signal.h> 
  
/* Signal Handler for SIGINT */
void sigintHandler(int sig_num) 
{ 
    /* Reset handler to catch SIGINT next time. 
       Refer http://en.cppreference.com/w/c/program/signal */
    signal(SIGINT, sigintHandler); 
    printf("\n Cannot be terminated using Ctrl+C \n"); 
    fflush(stdout); 
} 
  
int main () 
{ 
    /* Set the SIGINT (Ctrl-C) signal handler to sigintHandler  
       Refer http://en.cppreference.com/w/c/program/signal */
    signal(SIGINT, sigintHandler); 
  
    /* Infinite loop */
    while(1) 
    {         
    } 
    return 0; 
} 
