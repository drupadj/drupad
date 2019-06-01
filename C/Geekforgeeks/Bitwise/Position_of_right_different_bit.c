// Position of rightmost different bit

#include <stdio.h> 
   
int getRightMostSetBit(int n) 
{ 
    return (n & -n) + 1; 
} 
   
int posOfRightMostDiffBit(int m, int n) 
{ 
    return getRightMostSetBit(m ^ n); 
} 
   
int main() 
{ 
    int m = 52, n = 4; 
    printf ("%d",posOfRightMostDiffBit(m, n));
    return 0;      
}  
