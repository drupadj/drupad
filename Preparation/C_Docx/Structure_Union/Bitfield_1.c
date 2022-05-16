#include <stdio.h>
 
#define CHAR_BITS  8  // size of character
 
#define INT_BITS  ( sizeof(int) * CHAR_BITS) //bits in integer
 
 
// Use to print the data in binary format
void PrintInBinary(unsigned n)
{
 short int iPos;
 
 for (iPos = (INT_BITS -1) ; iPos >= 0 ; iPos--)
 {
   (n & (1 << iPos))? printf("1"): printf("0"); 
 }
 
}
 
struct sBitField
{
   unsigned int  Data00:8;
   unsigned int  Data01:8;
   unsigned int  Data02:8;
   unsigned int  Data03:8;
 
};
 
 
 
int main( int argc, char* argv[] )
{
   struct sBitField sBits ;
   
   int *pData = (int*)&sBits;
   
    *pData = 0;     //Clear all bits
 
   PrintInBinary(*pData );            // Print  bits
   putchar('\n');
 
   sBits.Data00 = 0x11;
   PrintInBinary(*pData);            // Print  bits
   putchar('\n');
 
   sBits.Data01 = 0x22;
   PrintInBinary(*pData );            // Print  bits
   putchar('\n');
 
   sBits.Data02 = 0x33;
 
   PrintInBinary(*pData);            // Print  bits
   putchar('\n');
 
   sBits.Data03 = 0x44;
   PrintInBinary(*pData);            // Print  bits
   putchar('\n');
 
}
