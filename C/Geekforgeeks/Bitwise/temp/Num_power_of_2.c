// Program to find whether a no is power of two

/*

Input : n = 4
Output : Yes
22 = 4

Input : n = 7
Output : No

Input : n = 32
Output : Yes
25 = 32

*/


#include<stdio.h> 
  
  
int main() 
{ 

	int num = 0;
	printf ("Enter a number:");
	scanf ("%d",&num);

	num & num - 1 ? printf("Not a power of 2\n") : printf("Power of 2\n");

return 0;

} 

