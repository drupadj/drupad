#include <stdio.h>
#include <limits.h>
 
#define SIZE_ARRAY(x) sizeof(x)/sizeof(x[0]); // Size of array
 
int FindTwoLargestNumber(int *piListOfData , int iSizeOfArray)
{
 int iLoop1= 0,iLoop2 =0;
 int iFirstLargest = INT_MIN;
 int iSecondLargest = INT_MIN;
 
 while(iLoop1 < iSizeOfArray)
 {
 if(piListOfData[iLoop1] > iFirstLargest)
 {
 iSecondLargest = iFirstLargest;
 iFirstLargest  = piListOfData[iLoop1];
 
 }
 else if((piListOfData[iLoop1] > iSecondLargest) && (piListOfData[iLoop1] !=iFirstLargest ))
 {
 iSecondLargest = piListOfData[iLoop1];
 }
 iLoop1++;
 }
 
 printf("First largest Numbers = %d\nSecond largest Number = %d\n ",iFirstLargest,iSecondLargest);
 
 
}
 
 
 
int main()
{
    int iaData[5] = {3,5,123,6,1};
    int ArraySize = SIZE_ARRAY(iaData);
    
    FindTwoLargestNumber(iaData,ArraySize);
 
 
    return 0;
}
