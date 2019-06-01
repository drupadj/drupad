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
