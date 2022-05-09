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

