/*

Write the macros to set, clear, toggle and check the bit of a given integer

 

See the below macro,

    #define SET_BIT(value, pos) value |= (1U<< pos)
    #define CLEAR_BIT(value, pos) value &= ~(1U<< pos)
    #define TOGGLE_BIT(value, pos) value ^= (1U<< pos)
    #define CHECK_BIT_IS_SET_OR_NOT(value, pos) value & (1U<< pos)

*/


#include <stdio.h> 
 
#define SET_BIT(value, pos) value |= (1U<< pos)
 
 
int main()
{
 //value
 unsigned int value =0;
 
    //bit position
 unsigned int pos = 0;
 
 
 printf("Enter the value\n");
 scanf("%d",&value);
 
 printf("Enter the position you want to Set\n");
 scanf("%d",&pos);
 
    SET_BIT(value,pos);
 
 printf("\n\n%dth Bit Set Now value will be = 0x%x\n",pos,value);
 
 return 0;
}
