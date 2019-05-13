#include<stdio.h>
 
int* Fun()
{
 int Data = 5; //Local variable
 
 return &Data; //Address of local variable
}
 
 
int main()
{
 int *piData = Fun(); //Returning address of the local variable
 
 printf("%d", *piData);
 
 return 0;
}
