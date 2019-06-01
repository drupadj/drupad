// Get the position of rightmost unset bit

#include<stdio.h>

int main () {

int i = 0, num = 0, count = 0;

printf ("Enter a number :");
scanf ("%d",&num);

for ( i = 0; i <= 31; i++ ) {
	if ((num & 1 << i) == 0){
		break;
	}
		
}

printf ("Number of set is = %d\n",i + 1);

return 0;

}

