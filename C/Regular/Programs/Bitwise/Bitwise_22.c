/*

Count number of bits to be flipped to convert A to B

In this question, you need to count flipped bits that require to convert A to B. To accomplish this task you need to find the number of bits that are different in A and B.
Suppose, A = 8, B = 7
Binary representation of A => 00001000
Binary representation of B => 00000111
Here we have to flip highlighted four bits of A
to make it B.
	
Suppose, A = 8, B = 7
 
Binary representation of A => 00001000
Binary representation of B => 00000111
 
Here we have to flip highlighted four bits of A
to make it B.

Algorithm

    Calculate XOR of A and B.With the help of XOR, we will discard the common bits and set the bits that are different in number A and B.
    Count the set bits of the above calculated XOR result.

*/

#include <stdio.h>
 
//function to calculate flipped bits
int CountFlippedBits(int A, int B) 
{ 
   int XorResult = 0;
   int count = 0; 
   
    //Doing Ex-or
    XorResult = (A ^ B);
    
    //Count set bits
    while (XorResult) 
 { 
 count += XorResult & 1; 
 XorResult >>= 1; 
 }
 
 return count;
} 
 
int main() 
{ 
    int A = 8; 
    int B = 7;
    int ret = 0; 
    
    //Function return count of flipped bits
    ret = CountFlippedBits(A,B);
    
    printf("Flipped Bits = %d\n",ret);
 
    return 0; 
}


// Output: Flipped Bits = 4
