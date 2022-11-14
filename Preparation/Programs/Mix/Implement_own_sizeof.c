
#include<stdio.h> 
//#define my_sizeof(type) (char *)(&type+1)-(char*)(&type) 
#define my_sizeof(type) (&type+1)-(&type) 
int main() 
{ 
    int x; 
    printf("%ld", my_sizeof(x)); 
    getchar(); 
    return 0; 
} 

