// Swap two nibbles in a byte


#include <stdio.h> 
  
unsigned char swapNibbles(unsigned char x) 
{ 
    return ( (x & 0x0F)<<4 | (x & 0xF0)>>4 ); 
} 
  
int main() 
{ 
    unsigned char x = 100; 
    printf("%u", swapNibbles(x)); 
    return 0; 
}

/*

Explanation:

100 is 01100100 in binary. The operation can be split mainly in two parts

1) The expression “x & 0x0F” gives us last 4 bits of x. For x = 100, the result is 00000100. Using bitwise ‘<<' operator, we shift the last four bits to the left 4 times and make the new last four bits as 0. The result after shift is 01000000.

2) The expression “x & 0xF0” gives us first four bits of x. For x = 100, the result is 01100000. Using bitwise ‘>>’ operator, we shift the digit to the right 4 times and make the first four bits as 0. The result after shift is 00000110.

At the end we use the bitwise OR ‘|’ operation of the two expressions explained above. The OR operator places first nibble to the end and last nibble to first. For x = 100, the value of (01000000) OR (00000110) gives the result 01000110 which is equal to 70 in decimal.

*/
