/* 

How to toggle a particular bit in C?

Bitwise XOR (^) operator use to toggle the bit of an integral data type. To toggle the nth bit shift the ‘1’ nth position toward the left and “XOR” it.

An algorithm to toggle the bits

Number  ^=  (1<< nth Position)

*/

#include <stdio.h>
#include <stdlib.h>
 
 
int main(int argc, char *argv[]) 
{
 
 unsigned char cData=0xF8;
 int iPos =0;
 
 system("COLOR F");
 printf("Initially cData = 0x%x\n\n",cData);
 
 printf("Enter the position which you want toggle = ");
 scanf("%d",&iPos);
 
 //toggle the nth bit.
 cData ^= 1<<iPos;
 
 //Print the data
 printf("\n\n%dth Bit Set Now cData will be = 0x%x\n",iPos,cData);
 
 
 return 0;
}


