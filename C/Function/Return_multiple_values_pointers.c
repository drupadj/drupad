#include <stdio.h>
#include <stdlib.h>
 
 
//function to get user info
void Getinfo(int *age, float *height, char *name)
{
 
   printf("\n\n Enter User age = ");
   scanf("%d",age);
   
   printf("\n\n Enter User height = ");
   scanf("%f",height);
   
   printf("\n\n Enter User name = ");
   scanf("%s",name);
 
}
 
 
int main()
{
 //variable to store age
   int age =0;
   //variable to store height
   float height = 0.0f;
   //variable to store name
   char name[24] = {0};
   
    //Get user info
   Getinfo(&age, &height, name);
 
   printf("\n User age = %d",age);
    
   printf("\n User height = %f",height);
 
   printf("\n User name = %s",name);
 
    return 0;
}
