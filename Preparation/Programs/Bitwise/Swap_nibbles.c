#include <stdio.h>
 
int swapNibbles(int x)
{
    return ((x & 0x0000FFFF)<<16 | (x & 0xFFFF0000)>>16 );
}
 
int main()
{
    int x = 0x12345678;
    printf("%x\n", swapNibbles(x));
    return 0;
}
