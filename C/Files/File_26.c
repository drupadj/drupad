
// c code to demonstrate fsetpos() function. 
#include <stdio.h> 
int main () { 
   FILE *fp; 
   fpos_t position; 
  
   /*write your own file name. 
    My file name is "myfile.txt"*/
   fp = fopen("myfile.txt","w+"); 
   fgetpos(fp, &position); 
   fputs("HelloWorld!", fp); 
    
   fsetpos(fp, &position); 
  
   // previous function is override 
   fputs("geeksforgeeks", fp); 
   fclose(fp); 
     
   return(0); 
} 

