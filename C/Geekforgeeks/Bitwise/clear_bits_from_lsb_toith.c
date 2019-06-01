/* Clear all bits from LSB to ith bit

To clear all bits of a data from LSB to the ith bit, we have to perform AND operation between data and mask (flag) having LSB to ith bit 0.

To create a mask, first left shift 1 (i+1) times.

mask =(1 << (i+1)); // give you 00001000

Now if we minus 1 from that, all the bits from 0 to i become 1 and remaining bits become 0.

mask = mask – 1 ; // give you 00000111

After that perform complement operation on the mask, all the bits from 0 to i become 0 and remaining bits become 1.

mask = ~mask; //give you 11111000

Now just simply perform anding operation between mask and data to get the desired result.

data = data & mask; // Now bits are clear from LSB to ith position

*/

#include <stdio.h>
 
 
int main()
{
  unsigned int mask = 0; // mask flag
  
  unsigned int i = 2; // ith position till u want to clear the bits
  
  unsigned int data = 15; //value of data
  
  
  mask = (1 << (i+1)); //Shift 1 ith position
  
  mask = mask -1 ; //give us 00000111
  
   mask = ~mask; //give us 11111000
    
  //Now clear all bits from msb to ith position
  data  = data & mask;
 
  printf("data = %d\n", data);
  
  return 0;
}
