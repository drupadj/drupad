// How to check particular bit is set or clear

#include<stdio.h>

int main () {

int num = 0, res = 0, pos = 0;

printf ("Enter a number :");
scanf ("%d",&num);

printf ("Enter a position :");
scanf ("%d",&pos);

res = num & 1 << pos;

res == 0 ? printf ("Bit is Clear\n") : printf ("Bit is set\n");

return 0;
}



