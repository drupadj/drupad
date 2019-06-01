// Write an efficient program to count number of 1s in binary representation of an integer.

/*

#include <stdio.h>        
  
unsigned int countSetBits(unsigned int n) 
{ 
  unsigned int count = 0; 
  while (n) 
  { 
    count += n & 1; 
    n >>= 1; 
  } 
  return count; 
} 
  
int main() 
{ 
    int i = 9; 
    printf("%d", countSetBits(i)); 
    return 0; 
} 


*/

#include<stdio.h>

int main () {

int i = 0, num = 0, count = 0;

printf ("Enter a number :");
scanf ("%d",&num);

for ( i = 0; i <= num; i++ ) {
	if ( num & 1 << i )
		count++;
}

printf ("Number of set is = %d\n",count);

return 0;

}
