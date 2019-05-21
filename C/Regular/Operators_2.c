#include <stdio.h> 
  
int main() 
{ 
    volatile int a = 10; 
    printf("\n %d %d", a, a++); 
  
    a = 10; 
    printf("\n %d %d", a,a++ ); 
  
    a = 10; 
    printf("\n %d %d %d ", a, a++, ++a); 
    return 0; 
}
