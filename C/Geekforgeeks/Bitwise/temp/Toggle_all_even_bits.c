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
