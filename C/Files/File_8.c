#include <bits/stdc++.h> 
  
int main() 
{ 
  
    // initializing the file pointer 
    FILE* fptr; 
  
    // name of the file as gfg.txt 
    char file[30] = { "gfg.txt" }; 
    char ch; 
  
    // opening the file in read mode 
    fptr = fopen(file, "r"); 
    ch = fgetc(fptr); 
  
    // converting into lower case 
    while (ch != EOF) { 
          
        // converting char to lower case 
        ch = tolower(ch); 
        printf("%c", ch); 
        ch = fgetc(fptr); 
    } 
  
    // closing the file 
    fclose(fptr); 
      
    return 0; 
} 
