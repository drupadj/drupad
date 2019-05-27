#include <stdio.h>
 
#define SIZE_ARRAY(x) sizeof(x)/sizeof(x[0]); // Size of array
 
 
int main()
{
    int iaData[5] = {3,5,123,6,1};
    int ArraySize = SIZE_ARRAY(iaData);
    int iLoop1 =0, iLoop2 =0;
    
    for(iLoop1 = 0; iLoop1 < ArraySize;iLoop1++)
    {
     for(iLoop2 = iLoop1+1; iLoop2 < ArraySize ; iLoop2++)
     {
     if(iaData[iLoop1] < iaData[iLoop2])
     {
     iaData[iLoop1] ^= iaData[iLoop2];
     iaData[iLoop2] ^= iaData[iLoop1];
     iaData[iLoop1] ^= iaData[iLoop2];
 }
 }
 }
 
 // Sorted array
 printf("\n\nSorted Array: ");
 for(iLoop1 = 0; iLoop1 < ArraySize;iLoop1++)
 printf("%d ",iaData[iLoop1]);
 
 // First element of sorted array
 printf("\n\nBigest element = %d\n",iaData[0]);
 
 //Second element of sorted array
 printf("\n\nSecond Biggest element = %d\n\n\n",iaData[1]);
    
    
   
 
 
    return 0;
}
