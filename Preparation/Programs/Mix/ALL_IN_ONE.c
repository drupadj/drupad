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
#include <stdio.h>

int main () {

int num = 0, sum = 0;

printf ("Enter a number :");
scanf ("%d", &num);

for (sum = 0; num > 0; sum += num % 10, num /= 10);

printf ("Sum is = %d\n", sum);

return 0;

}
#include<stdio.h>

int main () {

int a = 0, b = 0;

printf ("Enter 2 numbers : ");
scanf ("%d %d", &a, &b);

while ( b ) {

	int carry = a & b;
	a = a ^ b;
	b = carry << 1;
}

printf ("%d\n", a);

return 0;
}
#include <stdio.h>

int main() {

int arms = 153; 
int check, rem, sum = 0;

check = arms;

while(check != 0) {
	rem = check % 10;
	sum = sum + (rem * rem * rem);
	check = check / 10;
}

if(sum == arms) 
	printf("%d is an armstrong number.", arms);
else 
	printf("%d is not an armstrong number.", arms);
      
return 0;

}
#include<stdio.h>

int main () {

unsigned char ch = 97;

printf ("ch = %d\n", ch);

ch = ch + 3;

printf ("ch + 3 = %d\n", ch);

ch = ch * 2;

printf ("ch * 2 = %d\n", ch);

ch = ch + 60;

printf ("ch + 60 = %d\n", ch);

return 0;
}
#include<stdio.h>
#include <string.h>
 
union Information
{
    char acName[15];
    int iAge;
};
const union Information Info1;
 
int main()
{
    strcpy(Info1.acName, "aticleworld");
    printf("%s", Info1.acName);
  
    return 0; // Prints aticleworld
}
#include <stdio.h>
  
int main(void)
{
    unsigned int value = 0x1;
    char *r = (char *) &value;
 
    if (*r == 1) 
        printf("Your system is Little Endian\n");
    else
        printf("Your system is Big Endian\n");
    return 0;
}
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

// C program to find factorial of given number 
#include<stdio.h> 
  
// function to find factorial of given number 
unsigned int factorial(unsigned int n) 
{ 
    if (n == 0) 
      return 1; 
    return n * factorial(n - 1); 
} 
  
int main() 
{ 
    int num = 5; 
    printf("Factorial of %d is %d", num, factorial(num)); 
    return 0; 
} 


#include<stdio.h> 
#define my_sizeof(type) (char *)(&type+1)-(char*)(&type) 
int main() 
{ 
    double x; 
    printf("%ld", my_sizeof(x)); 
    getchar(); 
    return 0; 
} 

#include <stdio.h>
 
#define SIZE_ARRAY(x) sizeof(x)/sizeof(x[0]); // Size of array
 
 
int main()
{
    int iaData[5] = {3,5,123,6,1};
    int ArraySize = SIZE_ARRAY(iaData);
    int iLoop1 =0, iLoop2 =0;
    
    for(iLoop1 = 0; iLoop1 < ArraySize;iLoop1++)
    {
     for(iLoop2 = iLoop1+1; iLoop2 < ArraySize ; iLoop2++)
     {
     if(iaData[iLoop1] < iaData[iLoop2])
     {
     iaData[iLoop1] ^= iaData[iLoop2];
     iaData[iLoop2] ^= iaData[iLoop1];
     iaData[iLoop1] ^= iaData[iLoop2];
 }
 }
 }
 
 // Sorted array
 printf("\n\nSorted Array: ");
 for(iLoop1 = 0; iLoop1 < ArraySize;iLoop1++)
 printf("%d ",iaData[iLoop1]);
 
 // First element of sorted array
 printf("\n\nBigest element = %d\n",iaData[0]);
 
 //Second element of sorted array
 printf("\n\nSecond Biggest element = %d\n\n\n",iaData[1]);
    
    
   
 
 
    return 0;
}
#include <stdio.h>

int main() {

int n, reversedInteger = 0, remainder, originalInteger;

printf("Enter an integer: ");
scanf("%d", &n);

originalInteger = n;

// reversed integer is stored in variable 
while( n!=0 )
{
	remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
}

    // palindrome if orignalInteger and reversedInteger are equal

    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    
    return 0;
}
#include <stdio.h>
 
#define BITS(x) (sizeof(x) * 8 )
 
 
//Print Range of signed int
void SignedRange(unsigned int bits)
{
  int min = 0;
  int max = 0;
  
  min = - (1L <<(bits-1)); //Min value Equivalent to -2^(n-1)
  
  max =  ((1L <<(bits-1)) -1); //Max Value (2^(n-1)) -1
  
  printf("%d to %u\n\n",min,max);
}
 
 
//Print range of unsigned int
void UnsignedRange(unsigned int bits)
{
   unsigned int min = 0; //For unsigned min always 0
   unsigned long long  max = 0;
   
   max = ((1LLU << bits) - 1); //Equivalent to (2^n) -1
    
   printf(" %u to %llu\n\n", min, max);
}
 
 
int main()
{
     
    printf("\n  char Range => ");
    SignedRange(BITS(char));
    
    printf("\n  unsigned char Range =>");
    UnsignedRange(BITS(unsigned char));
    
    printf("\n  short Range => ");
    SignedRange(BITS(short));
    
    printf("\n  unsigned short Range => ");
    UnsignedRange(BITS(unsigned short));
    
    printf("\n  int Range => ");
    SignedRange(BITS(int));  
    
    printf("\n  unsigned int Range => ");
    UnsignedRange(BITS(unsigned int));
    
    
 return 0;
}
#include<stdio.h>

int main () {

int num = 0, rev = 0;

printf ("Enter a number :");
scanf ("%d", &num);

while ( num ) {
	
	rev = rev * 10 + num % 10;
	num = num / 10;
}

printf ("After reversing the num : %d\n", rev);

return 0;
}
#include<stdio.h>

int main () {

int i = 0, j = 0;

printf ("Enter 2 numbers :");
scanf ("%d %d", &i, &j);

printf ("Before swap i = %d j = %d\n", i, j);

i = i + j - ( j = i);

printf ("After swap i = %d j = %d\n", i, j);

return 0;
}
#include<stdio.h>

int main () {

int a = 0, b = 0;

printf ("Enter 2 numbers :");
scanf ("%d %d", &a, &b);

printf ("Before swap a = %d b = %d\n", a, b);

a = a + b;
b = a - b;
a = a - b;

printf ("After swap a = %d b = %d\n", a, b);

return 0;
}
#include<stdio.h>

int main () {

int i = 0, j = 0;

printf ("Enter 2 numbers :");
scanf ("%d %d", &i, &j);

printf ("Before swap i = %d j = %d\n", i, j);

i = (i * j) | ( j = i );

printf ("After swap i = %d j = %d\n", i, j);

return 0;
}
