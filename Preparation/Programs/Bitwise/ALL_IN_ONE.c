// How to check particular bit is set or clear

#include<stdio.h>

int main () {

int num = 0, pos = 0;

printf ("Enter a number :");
scanf ("%d",&num);

printf ("Enter a position :");
scanf ("%d",&pos);

pos = pos - 1;

num & 1 << pos ? printf ("Bit is Set\n") : printf ("Bit is clear\n");

return 0;
}



#include<stdio.h> 

int main()
{
    int num1 = 0, num2 = 0;

    printf("Enter num 1 :");

    scanf("%d", &num1);

    printf("Enter num 2 :");

    scanf("%d", &num2);

    num1 ^ num2 ? printf("Not equal\n") : printf("Equal\n");
}
#include<stdio.h>

int main() 
{ 
   int x = 0;

   printf ("Enter a number:"); 
   scanf ("%d",&x);

   (x & 1)? printf("Odd\n"): printf("Even\n"); 

   return 0; 
} 
// Multiply any Number with 4 using Bitwise Operator

#include <stdio.h> 
  
int multiplyWith4(int n) 
{ 
    return (n << 2); 
} 
  
int main() 
{ 
    int n = 0; 
    printf ("Enter a number:");
    scanf ("%d",&n);
    printf ("After multiply the number is = %d\n",(multiplyWith4(n)));
    return 0; 
} 
# include<stdio.h>
 
int multiplyBySeven(unsigned int n)
{ 
    /* Note the inner bracket here. This is needed
       because precedence of '-' operator is higher
       than '<<' */
    return ((n<<3) - n);
}
 
/* Driver program to test above function */
int main()
{
    unsigned int n = 4;
    printf("%u", multiplyBySeven(n));
 
    getchar();
    return 0;
}
// C program to find the element
// occurring odd number of times
#include <stdio.h>
 
// Function to find element occurring
// odd number of times
int getOddOccurrence(int ar[], int ar_size)
{
    int res = 0;
    for (int i = 0; i < ar_size; i++)    
        res = res ^ ar[i];
     
    return res;
}
 
/* Driver function to test above function */
int main()
{
    int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    int n = sizeof(ar) / sizeof(ar[0]);
     
    // Function calling
    printf("%d", getOddOccurrence(ar, n));
    return 0;
}
/*  0101 1010 101 pattern */

#include<stdio.h> 
 
int main()
{
    unsigned int n = 21;

    unsigned int num = n ^ (n >> 1);

    ((num + 1) & num) ? printf("No\n") : printf("Yes\n");
   
    return 0;       
}

#include<stdio.h>

int main () {

int num = 0;

printf ("Enter a num :");
scanf ("%d",&num);

num > 0 ? printf ("Positive number\n") : printf ("Negative number\n");


return 0;
}
#include<stdio.h>
#define bool int
 
/* Function to check if x is power of 4*/
bool isPowerOfFour(int n)
{
  if(n == 0)
    return 0;
  while(n != 1)
  {   
   if(n % 4 != 0)
      return 0;
    n = n / 4;     
  }
  return 1;
}
 
/*Driver program to test above function*/
int main()
{
  int test_no = 64;
  if(isPowerOfFour(test_no))
    printf("%d is a power of 4", test_no);
  else
    printf("%d is not a power of 4", test_no);
  getchar();
}
/*

Write MACRO to swap the bytes in 32bit Integer Variable.

*/

#include <stdio.h> 
 
 
#define SWAP_BYTES(u32Value) ((u32Value & 0x0000000F) << 4)\
|((u32Value & 0x000000F0) >> 4) \
|((u32Value & 0x00000F00) << 4) \
|((u32Value & 0x0000F000) >> 4) \
|((u32Value & 0x000F0000) << 4) \
|((u32Value & 0x00F00000) >> 4) \
|((u32Value & 0x0F000000) << 4) \
|((u32Value & 0xF0000000) >> 4)
 
 
int main()
{
 
 int u32CheckData  = 0x12345678;
 int u32Result = 0;
 
 u32Result = SWAP_BYTES(u32CheckData);  //swap the data
 
 printf("0x%x\n",u32Result);
 
 return 0;
 
}


#include <stdio.h>
 
unsigned char swapNibbles(unsigned char x)
{
    return ( (x & 0x0F)<<4 | (x & 0xF0)>>4 );
}
 
int main()
{
    unsigned char x = 10;
    printf("%u\n", swapNibbles(x));
    return 0;
}
// Swap two numbers without using a temporary variable?

#include <stdio.h>
 
void SwapTwoNumber(int *a, int *b)
{
 if(*a == *b) // Check if the two addresses are same
      return;
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
 
int main() {

   int x = 0, y = 0;
 
   printf ("Enter 2 numbers :");
   scanf ("%d %d", &x, &y);
 
  SwapTwoNumber(&x, &y);
  
  printf("x = %d and y = %d",x,y);
  
  return 0;
}
// Set all even bits of a number

#include<stdio.h> 
   
int main() 
{ 
    int n = 0, res = 0, count = 0; 
    printf ("Enter a number :");
    scanf ("%d",&n);

    for (int temp = n; temp > 0; temp >>= 1) {

        // if bit is odd, then generate 
        // number and or with res 
        if (count % 2 == 0)
            res |= (1 << count);

        count++;
    }

printf ("%d\n", n & res);

    return 0; 
} 

// Set all even bits of a number

#include<stdio.h> 
   
int main() 
{ 
    int n = 0, res = 0, count = 0; 
    printf ("Enter a number :");
    scanf ("%d",&n);

    for (int temp = n; temp > 0; temp >>= 1) {

        // if bit is odd, then generate 
        // number and or with res 
        if (count % 2 == 1)
            res |= (1 << count);

        count++;
    }

printf ("%d\n", n & res);

    return 0; 
} 

/*

How to set a bit in the number ‘num’ : ( num | 1 << pos )

How to unset/clear a bit at n’th position in the number ‘num’ : ( num & ~(1 << pos) )

Toggling a bit at nth position : ( num ^ (1 << pos) )

Checking if bit at nth position is set or unset: ( num & 1 << pos )

Stripping off the lowest set bit : X = X & (X-1) 

Stripping on the first unset bit : n = n | (n+1)

Getting lowest set bit of a number: num & (-num);

Clear all bits from LSB to ith bit : mask = ~((1 << i+1 ) - 1); x &= mask;

Clearing all bits from MSB to i-th bit : mask = (1 << i) - 1; x &= mask;

Divide by 2 : x >>= 1;

Multiplying by 2 : x <<= 1;

Binary number : num >> i & 1;

Short form of finding bitwise shift : Res = num * ( 2 ^ shift)

*/


// Set all even bits of a number

#include<stdio.h> 
   
int main() 
{ 
    int n = 0, res = 0, count = 0; 
    printf ("Enter a number :");
    scanf ("%d",&n);

    for (int temp = n; temp > 0; temp >>= 1) {

        // if bit is odd, then generate 
        // number and or with res 
        if (count % 2 == 1)
            res |= (1 << count);

        count++;
    }

printf ("%d\n", n | res);

    return 0; 
} 

// Set all odd bits of a number

#include<stdio.h> 
   
int main() 
{ 
    int n = 0, res = 0, count = 0; 
    printf ("Enter a number :");
    scanf ("%d",&n);

    for (int temp = n; temp > 0; temp >>= 1) {

        // if bit is odd, then generate 
        // number and or with res 
        if (count % 2 == 0)
            res |= (1 << count);
        count++;
    }

printf ("%d\n", n | res);

    return 0; 
} 

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
#include<stdio.h>

#define SET	1

void toggle(int n)
{
    int temp = 1;
 
    while (temp <= n)
    {
#ifdef TOGGLE
        n = n ^ temp;
#elif SET
	n = n | temp;
#else
	n = n & temp;
#endif
 
        temp = temp << 1;
    }

    printf("%d\n", n);
}
 
int main()
{
    int n = 10;
    toggle(n);
    return 0;
}
// Given n number, the task is to toggle even bit of the number

/*

nput : 10
Output : 0
binary representation 1 0 1 0
after toggle          0 0 0 0 


Input : 20
Output : 30
binary representation 1 0 1 0 0
after toggle          1 1 1 1 0

*/


#include<stdio.h> 
   
int evenbittogglenumber(int n) 
{ 
    int res = 0, count = 0; 

    for (int temp = n; temp > 0; temp >>= 1) { 
   
        // if bit is odd, then generate 
        // number and or with res 
        if (count % 2 == 1)
            res |= (1 << count);
   
        count++; 
    } 
    return n ^ res; 
} 
   
int main() 
{ 
    int n = 9; 
    printf ("%d\n",evenbittogglenumber(n));
    return 0; 
} 
// Given n number, the task is to toggle odd bit of the number

/*


Input : 10
Output : 15
binary representation 1 0 1 0
after toggle          1 1 1 1 

Input : 20
Output : 1
binary representation 1 0 1 0 0
after toggle          0 0 0 0 1

*/


#include<stdio.h> 
   
int oddbittogglenumber(int n) 
{ 
    int res = 0, count = 0; 

    for (int temp = n; temp > 0; temp >>= 1) { 
   
        // if bit is odd, then generate 
        // number and or with res 
        if (count % 2 == 0)
            res |= (1 << count);
   
        count++; 
    } 
    return n ^ res; 
} 
   
int main() 
{ 
    int n = 9; 
    printf ("%d\n",oddbittogglenumber(n));
    return 0; 
} 
// C program to get toggle case of a string 

#include <stdio.h> 
  
// tOGGLE cASE = swaps CAPS to lower 
// case and lower case to CAPS 

char *toggleCase(char *a) 
{ 
    for ( int i=0; a[i]!='\0'; i++) { 
  
        // Bitwise EXOR with 32 
        a[i] ^= 32; 
    } 
  
    return a; 
} 
  
int main() 
{ 
    char str[10];
    printf ("Enter a string :");
    scanf ("%s",str);
    printf("Toggle case: %s\n", toggleCase(str)); 
    return 0; 
} 

#include<stdio.h>

int main()
{
    int num = 0;

    printf("Enter a number :");

    scanf("%d", &num);

    num = num - 1;

    (num & num - 1) ? printf("No\n") : printf("Yes\n");

    return 0;
}
// Check if all bits of a number are set
// Check if all bits are unset

#include <stdio.h> 

int main() 
{ 
    int n = 0; 
    printf ("Enter a number :");
    scanf ("%d", &n);

    if (((n + 1) & n) == 0)
	printf ("All bits are set\n"); 
    else
	printf ("All bits are not set\n");
    return 0; 
} 
#include<stdio.h>

int main()
{
    int num = 0;

    printf("Enter a number :");

    scanf("%d", &num);

    (num & num - 1) ? printf("Num is not power of 2\n") : printf("Num is power of 2\n");

    return 0;
}
// Clear the first rightmost on bit
#include <stdio.h> 
  
int fun(unsigned int n) 
{ 
    return n & (n - 1); 
} 
  
int main() 
{ 
    int n = 7;

    printf("%d\n", fun(n));

    return 0; 
} 

// Set the rightmost off bit

/*

Input:  12 (00...01100)
Output: 13 (00...01101)

Input:  7 (00...00111)
Output: 15 (00...01111)

*/

#include<stdio.h> 
    
int setRightmostUnsetBit(int n)  
{      
    return n | (n+1);      
}  

int main()  
{  
    int n = 0;

    printf ("Enter a number :");  
    scanf ("%d", &n);
    printf("%d\n",setRightmostUnsetBit(n));  

    return 0;  
} 
/* Write an efficient program to count number of 1s in binary representation of an integer */

#define ALL_BITS

#include <stdio.h>        
  
unsigned int countSetBits(unsigned int n) 
{ 
  unsigned int count = 0; 
  while (n) 
  {
#ifdef ALL_BITS 
    count = count + (n & 1); 
#else
    count = count + ((n & 1) == 0);
#endif

    n = n >> 1;
  }
#ifdef ALL_BITS
  return (32 - count);
#else
  return count;
#endif
} 
  
int main() 
{ 
    int i = 0;

    printf("Enter number :");

    scanf("%d", &i);

    printf("%d\n", countSetBits(i)); 
    return 0; 

} 
// Write an efficient program to count number of 1s in binary representation of an integer.

#include <stdio.h>        
  
unsigned int countSetBits(unsigned int n) 
{ 
  unsigned int count = 0; 
  while (n) 
  { 
    count = count + (n & 1); 

    n = n >> 1;
  } 
  return count; 
} 
  
int main() 
{ 
    int i = 0;

    printf("Enter number :");

    scanf("%d", &i);

    printf("%d\n", countSetBits(i)); 
    return 0; 
} 
/* Find most significant set bit of a number */

/* Highest power of 2 less than or equal to given number */

#include<stdio.h>
 
unsigned int PrevPowerOf2(unsigned int n)
{
    unsigned count = 0;
 
    while(n)
    {
        n >>= 1;
        count++;
    }

    count = count - 1;

    return 1 << count;
}
 
int main()
{
    unsigned int n = 0;

    printf("Enter a number :");

    scanf("%d", &n);

    printf("%d\n", PrevPowerOf2(n));

    return 0;
}

// n = 17
#include<stdio.h>
 
unsigned int nextPowerOf2(unsigned int n)
{
    unsigned count = 0;
 
    while(n)
    {
        n >>= 1;
        count++;
    }

    return 1 << count;
}
 
int main()
{
    unsigned int n = 0;

    printf("Enter a number :");

    scanf("%d", &n);

    printf("%d\n", nextPowerOf2(n));

    return 0;
}

// n = 17
