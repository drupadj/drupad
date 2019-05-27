/*

How to clear a particular bit in C?

Bitwise AND operator (&) use to clear a bit of integral data type. “AND” of two bits is always zero if any one of them is zero.

An algorithm to clear the bits

Number  &=  ~ (1<< nth Position)

*/

#include <stdio.h>
 
 
 
#include <stdlib.h>
 
 
int main(int argc, char *argv[])
{
 
 unsigned char cData=0xFF;
 int iPos =0;
 
 printf("Initially cData = 0x%x\n\n",cData);
 
 printf("Enter the position which you want clear = ");
 scanf("%d",&iPos);
 
 //clear the nth bit.
 cData &= ~(1<<iPos);
 
 //Print the data
 printf("\n\n%dth Bit clear Now cData will be = 0x%x\n",iPos,cData);
 
 
 return 0;
}
