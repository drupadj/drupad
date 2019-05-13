#include <stdio.h>
 
int main() {  
 
const int a =7;
const int *p = &a; 
 
printf("%d",*p++); // Address change first 
 
 
 return 0;
}
