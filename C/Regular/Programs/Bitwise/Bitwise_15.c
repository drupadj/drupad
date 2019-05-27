// Multiply a number by 2 using bitwise operation

#include <stdio.h>
 
 
int main()
{
 
  unsigned int data = 15; //value of data
  
  data = data << 1; // equivalent to data * 2
  
  printf("data = %d\n", data);
  
  return 0;
}
