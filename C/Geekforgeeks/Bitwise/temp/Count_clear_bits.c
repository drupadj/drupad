// Count number of clear bits

#include<stdio.h>

int main () {

int i = 0, num = 0, count = 0;

printf ("Enter a number :");
scanf ("%d",&num);

for ( i = 31; i >= 0; i-- ) {
        if (!( num & 1 << i )) // if ((num & 1 << i) == 0)
                count++;
}

printf ("Number of set is = %d\n",count);

return 0;

}
