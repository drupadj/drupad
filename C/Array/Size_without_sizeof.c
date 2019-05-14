//How to find sizeof array in C/C++ without using sizeof?

#include <stdio.h>
 
int main(int argc, char *argv[]) {
 
 int iTotalElement = 0 ; 
 int  aiData[] = {10, 20, 30, 40, 50, 60};
 
 //Calculate numbers of elements using pointer arithmatic
    iTotalElement = *(&aiData + 1) - aiData;
   
    printf("Number of element = %d",iTotalElement);
    
 return 0;
}
