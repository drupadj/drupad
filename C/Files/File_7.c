// C Program for Lower Case to Uppercase and vice-versa in a file

#include <bits/stdc++.h> 
  
int main() 
{ 
    // initializing the file pointer 
    FILE* fptr; 
  
    // name of the file as sample.txt 
    char file[50] = { "gfg.txt" }; 
    char ch; 
  
    // opening the file in read mode 
    fptr = fopen(file, "r"); 
    ch = fgetc(fptr); 
  
    // converting into upper case 
    while (ch != EOF) { 
  
        // converting char to upper case 
        ch = toupper(ch); 
        printf("%c", ch); 
        ch = fgetc(fptr); 
    } 
  
    // closing the file 
    fclose(fptr); 
  
    return 0; 
} 
