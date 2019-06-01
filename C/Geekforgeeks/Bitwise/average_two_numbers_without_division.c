/*

Input : x = 10, y = 12
Output : 11

Input : x = 10, y = 7
Output : 8
We take floor of sum.

*/


// C program to find average without using 
// division. 
#include <stdio.h> 
  
int floorAvg(int x, int y) {  
     return (x + y) >> 1; } 
  
int main() { 
  int x = 10, y = 20; 
  printf("\n\nAverage = %d\n\n", floorAvg(x, y)); 
  return 0; 
} 

