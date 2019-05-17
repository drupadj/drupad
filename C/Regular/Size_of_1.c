
// C program to demonstrate that the 
// expressions written in sizeof() are 
// never executed 
#include <stdio.h> 
  
int main(){ 
      
    // The printf in sizeof is not executed 
    // Only the return type of printf is  
    // considered and its size is evaluated 
    // by sizeof, 
    int a = sizeof(printf("hey")); 
  
    printf("%d", a); 
      
    return 0; 
} 

// 4
