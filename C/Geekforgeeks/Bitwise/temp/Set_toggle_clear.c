#include<stdio.h>

void binary_num( int num ) {

for ( int i = 31; i >= 0; i-- ) {
        printf ("%d", num >> i & 1 );
        if ( i % 8 == 0 )
                printf (" ");
}

printf ("\n");
}

int main () {

int num = 0, pos = 0, choice = 0;

printf ("Enter a number :");
scanf ("%d",&num);

binary_num(num);

printf ("\n");

printf ("Enter a pos :");
scanf ("%d",&pos);

if ( pos >= 0 && pos <= 31) {

	printf ("Enter a choice :\n 1) Set a bit\n 2) Clear a bit\n 3) Toggle or Complement a bit\n");
	scanf ("%d",&choice);

	if ( choice == 1) {
		num = num | (1 << pos);
		printf ("After setting a bit = %d\n", num);
		binary_num(num);
	}
	else if ( choice == 2 ) {
		num = num & ~ (1 << pos);
		printf ("After clearing the bit = %d\n", num);
		binary_num(num);
	}
	else if ( choice == 3) {
		num = num ^ ( 1 << pos );
		printf ("After Complimenting a bit = %d\n", num);
		binary_num(num);
	}
	else
		printf ("Invalid number\n");

}


return 0;
}
