#include <stdio.h>
 
#define convert(value) ((0x000000ff & value) << 24) | ((0x0000ff00 & value) << 8) | \
                       ((0x00ff0000 & value) >> 8) | ((0xff000000 & value) >> 24)
 
int main(void)
{
int value = 0x11223344;
int converted = 0;
 
printf("Value Before Converting = 0x%x\n", value);
 
converted = convert(value);
 
 
printf("Value After Converting = 0x%x\n", converted);
return 0;
}
