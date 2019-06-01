#include<stdio.h>

int main () {

int a = 0, b = 0;

printf ("Enter number :");
scanf ("%x", & a);

b = a & 0x0000ffff;

a = a >> 16;

printf ("a = %x\n", a);
printf ("b = %x\n", b);

b = b << 16;

a = a | b;

printf ("a = %x\n", a);

return 0;
}
