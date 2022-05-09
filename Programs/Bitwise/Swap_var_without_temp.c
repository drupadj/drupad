// Swap two numbers without using a temporary variable?

#include <stdio.h>
 
void SwapTwoNumber(int *a, int *b)
{
 if(*a == *b) // Check if the two addresses are same
      return;
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
 
int main() {

   int x = 0, y = 0;
 
   printf ("Enter 2 numbers :");
   scanf ("%d %d", &x, &y);
 
  SwapTwoNumber(&x, &y);
  
  printf("x = %d and y = %d",x,y);
  
  return 0;
}
