#include<stdio.h>
 
int main(void)
{
 extern int var;
 var = 10;
 
 printf("%d",var);
 
 
 return 0;
}
int var = 0;
