
// One more C program to demonstrate that  
// the expressions written in sizeof() are 
// never executed 
#include <stdio.h> 
  
int main() { 
    int a = 5; 
    int b = sizeof(a = 6); 
    printf("a = %d,  b = %d\n", a, b); 
    return 0; 
}
// 5, 4
