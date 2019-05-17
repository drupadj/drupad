/*  How to change the output of printf() in main() ?


void fun() 
{ 
    // Add something here so that the printf in main prints 10 
} 
  
int main() 
{ 
    int i = 10; 
    fun(); 
    i = 20; 
    printf("%d", i); 
    return 0; 
}

*/



#include <stdio.h> 
  
void fun() 
{ 
   #define printf(x, y) printf(x, 10); 
} 
  
int main() 
{ 
    int i = 10; 
    fun(); 
    i = 20; 
    printf("%d", i); 
    return 0; 
}

