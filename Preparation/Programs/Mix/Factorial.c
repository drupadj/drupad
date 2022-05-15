#include <stdio.h>

int main () {

int num = 0, res = 1, i = 0;

printf ("Enter a number :");
scanf ("%d", &num);

for (i = 2; i <= num; i++) 
	res *= i; 

printf ("Factorial = %d\n", res);

return 0;
}
