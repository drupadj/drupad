#include<stdio.h>

int main () {

int a = 0, b = 0;

printf ("Enter 2 numbers : ");
scanf ("%d %d", &a, &b);

while ( b ) {

	int carry = a & b;
	a = a ^ b;
	b = carry << 1;
}

printf ("%d\n", a);

return 0;
}
