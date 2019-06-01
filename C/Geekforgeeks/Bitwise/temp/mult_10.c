#include<stdio.h> 

int multiplyTen(int n) 
{ 
    return (n<<1) + (n<<3); 
} 
  
int main() 
{ 
    int n = 0;

    printf ("Enter a number :");
    scanf ("%d",&n);

    printf("%d\n",multiplyTen(n)); 
    return 0; 
} 
