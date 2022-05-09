// How to check particular bit is set or clear

#include<stdio.h>

int main () {

int num = 0, pos = 0;

printf ("Enter a number :");
scanf ("%d",&num);

printf ("Enter a position :");
scanf ("%d",&pos);

pos = pos - 1;

num & 1 << pos ? printf ("Bit is Set\n") : printf ("Bit is clear\n");

return 0;
}



