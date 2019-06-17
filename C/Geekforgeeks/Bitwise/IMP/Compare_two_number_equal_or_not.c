// Check if two numbers are equal without using arithmetic and comparison operators

#include <stdio.h> 
  
void areSame(int a, int b) 
{ 
   if (a^b)
	printf ("Not same\n");
   else 
	printf ("same\n");
} 
  
int main() 
{  
	int a = 0, b = 0;
	printf ("Enter 2 numbers:");
	scanf ("%d %d",&a,&b);
	areSame(a, b); 
return 0;
}  
