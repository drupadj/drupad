
// C program to demonstrate use of ftel()                                 
#include<stdio.h> 
  
int main() 
{ 
    /* Opening file in read mode */
    FILE *fp = fopen("test.txt","r"); 
  
    /* Reading first string */
    char string[20];    
    fscanf(fp,"%s",string); 
  
    /* Printing position of file pointer */
    printf("%ld", ftell(fp)); 
    return 0; 
} 

