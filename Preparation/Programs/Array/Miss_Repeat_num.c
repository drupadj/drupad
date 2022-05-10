/* C program to Find the repeating  and missing elements
 *
 * Traverse the array. While traversing, use the absolute value of every element as an index and make the value at this index as negative to mark it visited. If something is already marked negative then this is the repeating element. To find missing, traverse the array again and look for a positive value
 */
  
#include <stdio.h>
#include <stdlib.h>
  
void printTwoElements(int arr[], int size)
{
    int i;
    printf("\n The repeating element is");
  
    for (i = 0; i < size; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            printf(" %d ", abs(arr[i]));
    }
  
    printf("\nand the missing element is ");
    for (i = 0; i < size; i++) {
        if (arr[i] > 0)
            printf("%d", i + 1);
    }
}
  
// Driver code
int main()
{
    int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printTwoElements(arr, n);
    return 0;
}
