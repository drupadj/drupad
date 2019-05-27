/* How do I get a bit from an integer value in C?

To get the ith bit, perform Anding operation between the ith bit and 1 (1 << i) after that shift the result i position in right using right operation.

*/

#include <stdio.h>
 
//Macro to Get bit from the given position
#define GET_BITS(data, pos) ((data & ( 1 << pos)) >> pos)
 
int main()
{
    unsigned char value = 16; //value in hex 00010000
    
    unsigned char position = 1;
 
    printf("%d\n", GET_BITS(value,position)); //print gets value from the 1th position
 
 position = 4;
 
 printf("%d\n", GET_BITS(value,position)); //print gets value from 3rd position
 
 
    return 0;
}
