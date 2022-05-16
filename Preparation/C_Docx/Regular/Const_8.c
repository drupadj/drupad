#include <stdio.h>
 
int main() {  
 
const int a =7;
const int  * p=&a; 
 
printf("%d",*++p); // Garbage Data
 
 
 return 0;
}
