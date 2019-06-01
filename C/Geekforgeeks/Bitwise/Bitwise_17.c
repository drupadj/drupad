/*

Swap two nibbles of a byte

A nibble consists four bits, sometime interviewer asked the question to swap the nibble of a byte.It is a very easy question, here << (left shift) and >> (right shift) operators are used to swap the nibble.

*/

#include <stdio.h>
 
//Macro to swap nibbles
 
#define SWAP_NIBBLES(data) ((data & 0x0F)<<4 | (data & 0xF0)>>4)
 
int main()
{
    unsigned char value = 0x23; //value in hex
 
    printf("0x%x", SWAP_NIBBLES(value)); //print after swapping
 
    return 0;
}
