/*

Swap all odd and even bits

In the above question, you need to swap the even and odd bits. To accomplish the above task you need to first find the even and odd bits then shift these bits. See the below steps,

Let the input number is data (Assuming integer size is 4 bytes),

    Get all even bits of data by doing bitwise and (&) of data with 0xAAAAAAAA (data & 0xAAAAAAAA).
    Get all odd bits of data by doing bitwise and (&) of data with 0x55555555 (data & 0x55555555).
    Right shift all even bits ((data & 0xAAAAAAAA)>>1).
    Left shift all odd bits ((data & 0x55555555)<<1).
    Combine the value which gets from the left and right operation ((data & 0xAAAAAAAA)>>1 | (data & 0x55555555)<<1).

*/


#include <stdio.h> 
 
int main()
{
 int data = 2;
 
 data = ((data & 0xAAAAAAAA)>>1 | (data & 0x55555555)<<1);
 
 printf("%d",data);
 
 return 0;
}
