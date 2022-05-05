#include<stdio.h>

int main () {

int pos = 0, num = 0, count = 0;

printf ("Enter a number : ");
scanf ("%d", &num);

for ( pos = 31; pos >= 0; pos--) {

if ((num & 1 << pos) && (!(num & 1 << pos - 1)))
		count++; 
} 
	printf ("Count is = %d\n", count);
	return 0;
}
