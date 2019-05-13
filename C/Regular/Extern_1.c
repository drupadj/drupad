#include<stdio.h>
 
int main(void)
{
 extern int var;
 
 printf("%d",var);
 int var = 0;
 
 return 0;
}
