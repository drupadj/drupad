#include<stdio.h>

int main() 
{ 
   int x = 0;

   printf ("Enter a number:"); 
   scanf ("%d",&x);

   (x & 1)? printf("Odd\n"): printf("Even\n"); 

   return 0; 
} 
