/* Detect if two integers have opposite signs?

The two integer have the different signs if their MSB is different. In “C” Language using the EX-OR operator, we can check the sign of the integers.

We know that for the same input EX-OR produces the low output and for the different input it produces the high output. 
*/
#include<stdbool.h>
#include<stdio.h>
 
bool CheckOppositeSign(int a, int b)
{
 bool bRetValue = 0;
 
 bRetValue = ((a ^ b) < 0); // 1 iff a and b have opposite signs
 
    return bRetValue;
}
 
int main()
{
    int a = 0,b=0;
 bool bRetValue;
 
 
 //ENTER THE VALUE OF a & b
 printf("Enter the Value of a = ");
 scanf("%d",&a);
 
 printf("\nEnter the Value of b = ");
 scanf("%d",&b);
 
 
 bRetValue = CheckOppositeSign(a, b); // check signs of a & b
 
    if (true == bRetValue)
    {
     printf ("\nIntegers have the opposite sign\n\n");
 }
    else
    {
     printf ("\nInteger have the same sign\n\n");
 }
      
    return 0;
}


