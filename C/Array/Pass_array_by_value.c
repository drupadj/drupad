/*
In C, array name represents address and when we pass an array, we actually pass address and the parameter receiving function always accepts them as pointers (even if we use [], refer this for details).

How to pass array by value, i.e., how to make sure that we have a new copy of array when we pass it to function?
This can be done by wrapping the array in a structure and creating a variable of type of that structure and assigning values to that array. After that, passing the variable to some other function and modifying it as per requirements. Note that array members are copied when passed as parameter, but dynamic arrays are not. So this solution works only for non-dynamic arrays (created without new or malloc).

Let’s see an example to demonstrate the above fact using a C program:

*/



// C program to demonstrate passing an array 
// by value using structures. 
#include<stdio.h> 
#include<stdlib.h> 
  
# define SIZE 5 
  
// A wrapper for array to make sure that array 
// is passed by value. 
struct ArrayWrapper 
{ 
    int arr[SIZE]; 
}; 
  
// An array is passed by value wrapped in temp 
void modify(struct ArrayWrapper temp) 
{ 
    int *ptr = temp.arr; 
    int i; 
  
    // Display array contents 
    printf("In 'modify()', before modification\n"); 
    for (i = 0; i < SIZE; ++i) 
        printf("%d ", ptr[i]); 
  
    printf("\n"); 
  
    // Modify the array 
    for (i = 0; i < SIZE; ++i) 
        ptr[i] = 100; // OR *(ptr + i) 
  
    printf("\nIn 'modify()', after modification\n"); 
    for (i = 0; i < SIZE; ++i) 
        printf("%d ", ptr[i]); // OR *(ptr + i) 
} 
  
// Driver code 
int main() 
{ 
    int i; 
    struct ArrayWrapper obj; 
    for (i=0; i<SIZE; i++) 
        obj.arr[i] = 10; 
  
    modify(obj); 
  
    // Display array contents 
    printf("\n\nIn 'Main', after calling modify() \n"); 
    for (i = 0; i < SIZE; ++i) 
        printf("%d ", obj.arr[i]); // Not changed 
  
    printf("\n"); 
  
    return 0; 
} 

