#include<stdio.h>

unsigned int swapBits(unsigned int n, unsigned int p1, unsigned int p2)
{
  return (((n >> p1) & 1) == ((n >> p2) & 1) ? n : ((n ^ (1 << p2)) ^ (1 << p1)));
}

int main (){

int c, num = 9, nPostion = 2, mPosition = 3;

c = swapBits(num, nPostion, mPosition);

printf ("%d\n",c);

return 0;
}
