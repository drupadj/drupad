#include <stdio.h>

int main () {

int i = 0, num = 0;

printf ("Enter a number :");
scanf ("%d", &num);

for ( i = 31; i >= 0; i-- ) {
        printf ("%d", num >> i&1 );
        if ( i % 8 == 0 )
        printf (" ");
}

printf ("\n");

num = num >> 3 | num << 3;

for ( i = 31; i >= 0; i-- ) {
        printf ("%d", num >> i&1 );
        if ( i % 8 == 0 )
        printf (" ");
}

printf ("\n");
printf ("%d\n", num );

return 0;
}
