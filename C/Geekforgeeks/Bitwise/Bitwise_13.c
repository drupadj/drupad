// Clear all bits from MSB to ith bit

/*

Here I have supposed data is stored using 8 bits.

let’s assume the ith position is 2.

mask =(1 <<( i+1)); // give you 00001000

so now if we subtract 1 from the mask (mask = mask – 1), then we will get 00000111

Using the mask, now we can clear MSB to ith bits of data (15).

data = data & mask; // Now bits are clear

*/

#include <stdio.h>
 
 
int main()
{
  unsigned int mask = 0; // mask flag
  
  unsigned int i = 2; // ith position till u want to clear the bits
  
  unsigned int data = 15; //value of data
  
  
  mask = (1 << (i+1)); //Shift 1 ith position
  
  mask = mask -1 ; //give us 00000111
    
  //Now clear all bits from msb to ith position
  data  = data & mask;
 
  printf("data = %d\n", data);
  
  return 0;
}
