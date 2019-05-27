#include <stdio.h>
#include <limits.h> /* For INT_MAX */
 
 
#define SIZE_ARRAY(x) sizeof(x)/sizeof(x[0]); // Size of array
 
int FindTwoSmallestNumber(int *piListOfData , int iSizeOfArray)
{
 int iLoop1= 0,iLoop2 =0;
 int iFirstSmallest = INT_MAX;
 int iSecondSmallest = INT_MAX;
 
 while(iLoop1 < iSizeOfArray)
 {
 if(piListOfData[iLoop1] < iFirstSmallest)
 {
 iSecondSmallest = iFirstSmallest;
 iFirstSmallest  = piListOfData[iLoop1];
 
 }
 else if((piListOfData[iLoop1] < iSecondSmallest) && (piListOfData[iLoop1] !=iFirstSmallest ))
 {
 iSecondSmallest = piListOfData[iLoop1];
 }
 iLoop1++;
 }
 
 printf("First Smallest Numbers = %d\nSecond Smallest Number = %d\n ",iFirstSmallest,iSecondSmallest);
 
 
}
 
 
 
int main()
{
    int iaData[5] = {3,5,123,6,1};
    int ArraySize = SIZE_ARRAY(iaData);
    
    FindTwoSmallestNumber(iaData,ArraySize);
 
 
    return 0;
}
