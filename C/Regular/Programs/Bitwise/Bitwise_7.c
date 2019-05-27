/* 

How to check if a particular bit is set in C?

To check the nth bit, shift the ‘1’ nth position toward the left and then “AND” it with the number.

An algorithm to check the bits

 Bit = Number & (1 << nth)

*/


#include <stdio.h>
#include <stdlib.h>
 
 
int main(int argc, char *argv[]) 
{
 
 unsigned char cData=0xFc;
 int iPos =0;
 
 system("COLOR F");
 printf("Initially cData = 0x%x\n\n",cData);
 
 printf("Enter the position which you want check = ");
 scanf("%d",&iPos);
 
 if(cData & (1<<iPos)) { //Check bit set or not
  
  printf("\n\nBit is One");
  
 } else {
  
  printf("\n\nBit is zero");
 }
  
 return 0;
}
