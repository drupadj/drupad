/*

How to set a particular bit in C?
Setting a Bits

Bitwise OR operator (|) use to set a bit of integral data type.”OR” of two bits is always one if any one of them is one.

An algorithm to set the bits

Number  | =  (1<< nth Position)

*/


#include <stdio.h>
#include <stdlib.h>
 
 
int main(int argc, char *argv[])
{
 
 unsigned char cData=0x00;
 int iPos =0;
 
 printf("cData = 0x%x\n\n",cData);
 
 printf("Enter the position which you want set = ");
 scanf("%d",&iPos);
 
 //Set the nth bit.
 cData|=1<<iPos;
 
 //Print the data
 printf("\n\n%dth Bit Set Now cData will be = 0x%x\n",iPos,cData);
 
 
 return 0;
}
