// C program of nested function 
// with the help of gcc extension 
#include <stdio.h> 
int main(void) 
{ 
    auto int view(); // declare function with auto keyword 
    view(); // calling function 

    auto int Drupad();
    printf("Main\n"); 
  
    int view() 
    { 
        printf("View\n"); 
	Drupad();
    } 

    int Drupad()
    {

	printf ("Hie\n");

    }  
    printf("GEEKS"); 
    return 0; 
} 

