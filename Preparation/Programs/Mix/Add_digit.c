#include <stdio.h>

int main () {

int num = 0, sum = 0;

printf ("Enter a number :");
scanf ("%d", &num);

while ( num ) {

	sum = sum + num % 10;
	num = num / 10;
}

printf ("Sum is = %d\n", sum);

return 0;

}
