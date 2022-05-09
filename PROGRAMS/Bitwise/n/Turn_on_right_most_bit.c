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
