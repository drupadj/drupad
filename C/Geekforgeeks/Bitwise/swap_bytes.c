/*

Write MACRO to swap the bytes in 32bit Integer Variable.

*/

#include <stdio.h> 
#include <inttypes.h>
 
 
#define SWAP_BYTES(u32Value) ((u32Value & 0x000000FF) << 24)\
|((u32Value & 0x0000FF00) << 8) \
|((u32Value & 0x00FF0000) >> 8) \
|((u32Value & 0xFF000000) >> 24)
 
 
int main()
{
 
 uint32_t u32CheckData  = 0x11223344;
 uint32_t u32Result = 0;
 
 u32Result = SWAP_BYTES(u32CheckData);  //swap the data
 
 printf("0x%x\n",u32Result);
 
 return 0;
 
}


