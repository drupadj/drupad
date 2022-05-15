#include<stdio.h>

int main () {

int num = 0, rev = 0;

printf ("Enter a number :");
scanf ("%d", &num);

while ( num ) {
	
	rev = rev * 10 + num % 10;
	num = num / 10;
}

printf ("After reversing the num : %d\n", rev);

return 0;
}
