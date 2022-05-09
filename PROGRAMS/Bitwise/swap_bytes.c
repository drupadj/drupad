/*

Write MACRO to swap the bytes in 32bit Integer Variable.

*/

#include <stdio.h> 
 
 
#define SWAP_BYTES(u32Value) ((u32Value & 0x0000000F) << 4)\
|((u32Value & 0x000000F0) >> 4) \
|((u32Value & 0x00000F00) << 4) \
|((u32Value & 0x0000F000) >> 4) \
|((u32Value & 0x000F0000) << 4) \
|((u32Value & 0x00F00000) >> 4) \
|((u32Value & 0x0F000000) << 4) \
|((u32Value & 0xF0000000) >> 4)
 
 
int main()
{
 
 int u32CheckData  = 0x12345678;
 int u32Result = 0;
 
 u32Result = SWAP_BYTES(u32CheckData);  //swap the data
 
 printf("0x%x\n",u32Result);
 
 return 0;
 
}


