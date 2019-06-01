// Detect if two integers have opposite signs?

#include<stdio.h>
 
int main() {

int a = 0, b = 0;
 
 
printf("Enter the Value of a :");

scanf("%d", &a);
 
printf("\nEnter the Value of b : ");

scanf("%d", &b);
 
((a ^ b) < 0) ? printf ("Different\n"): printf ("Same\n");

return 0;
}


