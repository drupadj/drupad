#include <stdio.h>

int main () {

int num = 0, sum = 0;

printf ("Enter a number :");
scanf ("%d", &num);

for (sum = 0; num > 0; sum += num % 10, num /= 10);

printf ("Sum is = %d\n", sum);

return 0;

}
