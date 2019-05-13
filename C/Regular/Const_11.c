#include<stdio.h>
 
int ReplaceValue(int *iData)
{
    iData = iData+3;
    *iData = 11;
    return 0;
}
int main()
{
    const int arr[5] = {1, 2, 3, 4, 5};
    
    printf("arr[3] before calling function = %d\n\n", arr[3]);
    ReplaceValue(arr);
    printf("\narr[3] after calling  function = %d\n\n", arr[3]);
    
    return 0;
}
