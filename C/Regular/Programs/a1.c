// Program for Sum the digits of a given number


// C program to compute sum of digits in  
// number. 
# include<stdio.h> 
  
/* Function to get sum of digits */

int getSum(int n) 
{  
   int sum = 0; 
   while (n != 0) 
   { 
       sum = sum + n % 10;
       n = n/10;
   }
   return sum;
} 
  
int main()
{ 
  int n = 0;

  printf ("Enter a number:");
  scanf ("%d",&n); 

  printf(" %d \n", getSum(n));
 
  return 0; 
} 
