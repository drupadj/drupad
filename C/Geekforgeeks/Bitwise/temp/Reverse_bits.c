#include<stdio.h>

int main () {

int num = 0, i = 0, m = 0, j = 0, n = 0;

printf ("Enter a number :");
scanf ("%d", &num);

printf ("Before Reversing the number is : %d\n", num);

for ( i = 31; i >= 0; i-- ) {
	printf ("%d", num >> i&1 );
	if ( i % 8 == 0 )
	printf (" ");
}

printf ("\n");

for ( i = 0, j = 31; i < j; i++, j--) {
	m = num >> i & 1;
	n = num >> j & 1;

	if ( m != n ) {
		num = num ^ 1 << i;
		num = num ^ 1 << j; 
	}
}

printf ("After Reversing the number is : %d\n", num);

for ( i = 31; i >= 0; i-- ) {
        printf ("%d", num >> i&1 );
        if ( i % 8 == 0 )
        printf (" ");
}
printf ("\n");
return 0;

}
