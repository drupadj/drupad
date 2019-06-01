#include<stdio.h>

int main () {

int a = 0, b = 0;

printf ("Enter 2 numbers :");
scanf ("%d %d", &a, &b);

printf ("Before swap a = %d b = %d\n", a, b);

a = a + b;
b = a - b;
a = a - b;

printf ("After swap a = %d b = %d\n", a, b);

return 0;
}
