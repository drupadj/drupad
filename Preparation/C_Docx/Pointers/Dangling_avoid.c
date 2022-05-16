#include<stdio.h>
 
int *foo()
{
 static int Data = 6;
 
 return &Data;
}
 
int main()
{
 
int *piData = NULL;
 
piData = foo();
 
 // Now piData is Not a dangling pointer as it points
 // to static variable.
printf("%d",*piData);
  
return 0;
}
