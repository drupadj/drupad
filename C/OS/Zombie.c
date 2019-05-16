
// A C program to demonstrate Zombie Process.  
// Child becomes Zombie as parent is sleeping 
// when child process exits. 
#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    // Fork returns process id 
    // in parent process 
    pid_t child_pid = fork(); 
  
    // Parent process  
    if (child_pid > 0) 
        sleep(50); 
  
    // Child process 
    else        
        exit(0); 
  
    return 0; 
} 

/*

the child finishes its execution using exit() system call while the parent sleeps for 50 seconds, hence doesn’t call wait() and the child process’s entry still exists in the process table.

*/
