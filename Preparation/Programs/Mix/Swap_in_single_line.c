#include<stdio.h>

int main () {

int i = 0, j = 0;

printf ("Enter 2 numbers :");
scanf ("%d %d", &i, &j);

printf ("Before swap i = %d j = %d\n", i, j);

i = i + j - ( j = i);

printf ("After swap i = %d j = %d\n", i, j);

return 0;
}
