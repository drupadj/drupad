/* Segregate 0s and 1s in an array 

1) Count the number of 0s. So let’s understand with an example we have an array arr = [0, 1, 0, 1, 0, 0, 1] the size of the array is 7 
now we will traverse the entire array and find out the number of zeros in the array, In this case the number of zeros is 4 so now we can 
easily get the number of Ones in the array by Array Length – Number Of Zeros.

2) Once we have counted, we can fill the array first we will put the zeros and then ones (we can get number of ones by using above formula).

*/
#include<stdio.h>
void segregate0and1(int arr[], int n)
{
    int count = 0; // Counts the no of zeros in arr

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            count++;
    }

    // Loop fills the arr with 0 until count
    for (int i = 0; i < count; i++)
        arr[i] = 0;

    // Loop fills remaining arr space with 1
    for (int i = count; i < n; i++)
        arr[i] = 1;
}

void print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
	    printf("%d ", arr[i]);

    printf("\n");
}

int main()
{
    int arr[] = { 0, 1, 0, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    segregate0and1(arr, n);
    print(arr, n);

    return 0;
}
// C program to find second largest
// element in an array
 
#include <limits.h>
#include <stdio.h>
 
/* Function to print the second largest elements */
void print2largest(int arr[], int arr_size)
{
    int i, first, second;
 
    /* There should be atleast two elements */
    if (arr_size < 2) {
        printf(" Invalid Input ");
        return;
    }
 
    first = second = INT_MIN;
    for (i = 0; i < arr_size; i++) {
        /* If current element is greater than first
           then update both first and second */
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
 
        /* If arr[i] is in between first and
           second then update second  */
        else if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MIN)
        printf("There is no second largest element\n");
    else
        printf("The second largest element is %d", second);
}
 
/* Driver program to test above function */
int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    print2largest(arr, n);
    return 0;
}
// C program for find the largest
// three elements in an array
#include <limits.h> /* For INT_MIN */
#include <stdio.h>
 
/* Function to print three largest elements */
void print3largest(int arr[], int arr_size)
{
    int i, first, second, third;
 
    /* There should be atleast three elements */
    if (arr_size < 3) {
        printf(" Invalid Input ");
        return;
    }
 
    third = first = second = INT_MIN;
    for (i = 0; i < arr_size; i++) {
        /* If current element is greater than first*/
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
 
        /* If arr[i] is in between first and second then update second  */
        else if (arr[i] > second) {
            third = second;
            second = arr[i];
        }
 
        else if (arr[i] > third)
            third = arr[i];
    }
 
    printf("Three largest elements are %d %d %d\n", first, second, third);
}
 
/* Driver program to test above function */
int main()
{
    int arr[] = { 12, 13, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    print3largest(arr, n);
    return 0;
}
void add(int A[][N], int B[][N], int C[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];
}
// How to pass an array as a parameter in C?

#include <stdio.h>
 
//Size of the created array
#define ARRAY_SIZE  5
 
 
//Function to read array element
void ReadArray(int *paData)
{
 int index = 0;
 
 for(index= 0; index < ARRAY_SIZE; ++index)
 {
 printf("%d\n",paData[index]);
 
 }
}
 
 
 
int main(int argc, char *argv[]) 
{
 //Create an array
 int aiData[ARRAY_SIZE] = {1,2,3,4,5}; 
 
 
  //Pass array as a parameter
  ReadArray(aiData);
  
 return 0;
}
/* Count 1’s in a sorted binary array */

#include<stdio.h>
#include<stdbool.h>
/* Returns counts of 1's in arr[low..high].  The array is
   assumed to be sorted in non-increasing order */
 
int countOnes(bool arr[], int n)
{
    int ans;
    int low = 0, high = n - 1;
    while (low <= high) { // get the middle index
        int mid = (low + high) / 2;
 
        // else recur for left side
        if (arr[mid] < 1)
            high = mid - 1;
        // If element is not last 1, recur for right side
        else if (arr[mid] > 1)
            low = mid + 1;
        else
        // check if the element at middle index is last 1
        {
            if (mid == n - 1 || arr[mid + 1] != 1)
                return mid + 1;
            else
                low = mid + 1;
        }
    }
}
 
int main()
{
    bool arr[] = { 1, 1, 1, 1, 0, 0, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", countOnes(arr, n));
    return 0;
}
// C program to rearrange the elements
// in the array such that even positioned are
// greater than odd positioned elements
#include<stdio.h> 
// swap two elements
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void rearrange(int arr[], int n)
{
    for (int i = 1; i < n; i++) {
        // if index is even
        if (i % 2 == 0) {
            if (arr[i] > arr[i - 1])
                swap(&arr[i - 1], &arr[i]);
        }
        // if index is odd
        else {
            if (arr[i] < arr[i - 1])
                swap(&arr[i - 1], &arr[i]);
        }
    }
}
 
int main()
{
    int n = 5;
    int arr[] = { 1, 3, 2, 2, 5 };
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
	    printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
/* Find the minimum element in a sorted and rotated array */

int findMin(int arr[], int low, int high)
{
    while(low < high)
    {
        int mid = (low + high)/2;

        if (arr[mid] == arr[high])
            high--;
        else if(arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }
    return arr[high];
}

/* int arr1[] = {5, 6, 1, 2, 3, 4}; 
 * low = 0, high = 5 , a[5]
 *
 *int arr2[] = {1, 2, 3, 4};
 *
 * */
#include <stdio.h>
 
int largest(int arr[], int n)
{
    int i;
    
    int max = arr[0];
 
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
 
int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest in given array is %d\n", largest(arr, n));
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{

int n = 100;

int *ptr = (int *)malloc(n);

*ptr = n;

int *ptr1 = ptr + 1;

int size = ptr1[-1];

printf("SIZE : %d\n", size);

}
// C program to rearrange an array in minimum
// maximum form
#include<stdio.h> 
// Prints max at first position, min at second position
// second max at third position, second min at fourth
// position and so on.
void rearrange(int arr[], int n)
{
    // Auxiliary array to hold modified array
    int temp[n];
 
    // Indexes of smallest and largest elements
    // from remaining array.
    int small = 0, large = n - 1;
 
    // To indicate whether we need to copy remaining
    // largest or remaining smallest at next position
    int flag = true;
 
    // Store result in temp[]
    for (int i = 0; i < n; i++) {
        if (flag)
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];
 
        flag = !flag;
    }
 
    // Copy temp[] to arr[]
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}
 
// Driver code
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    rearrange(arr, n);
 
    for (int i = 0; i < n; i++)
	    printf("%d ", arr[i]);
    return 0;
}
/**********************************************************
 * Merge an array of size n into another array of size m+n

   1) Move m elements of mPlusN[] to end.
   2) Start from nth element of mPlusN[] and 0th
      element of N[] and merge them into mPlusN[].
***********************************************************/

// C program to Merge an array of
// size n into another array of size m + n
#include <stdio.h>
 
/* Assuming -1 is filled for
   the places where element
   is not available */
#define NA -1
 
/* Function to move m elements
   at the end of array mPlusN[]
 */
void moveToEnd(int mPlusN[], int size)
{
    int i = 0, j = size - 1;
    for (i = size - 1; i >= 0; i--)
        if (mPlusN[i] != NA) {
            mPlusN[j] = mPlusN[i];
            j--;
        }
}
 
/* Merges array N[] of size n into array mPlusN[]
   of size m+n*/
int merge(int mPlusN[], int N[], int m, int n)
{
    int i = n; /* Current index of i/p part of mPlusN[]*/
    int j = 0; /* Current index of N[]*/
    int k = 0; /* Current index of output mPlusN[]*/
    while (k < (m + n))
    {
        /* Take an element from mPlusN[] if
           a) value of the picked element is smaller and we
           have not reached end of it
           b) We have reached end of N[] */

        if ((j == n)|| (i < (m + n) && mPlusN[i] <= N[j]))
        {
	    printf("%d : %d : %d", i, mPlusN[i], N[j]);
	    printf("\n");
            mPlusN[k] = mPlusN[i];
            k++;
            i++;
        }
        else // Otherwise take element from N[]
        {
            mPlusN[k] = N[j];
            k++;
            j++;
        }
    }
}
 
/* Utility that prints out an array on a line */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
 
    printf("\n");
}
 
/* Driver code */
int main()
{
    /* Initialize arrays */
    int mPlusN[] = { 2, 8, NA, NA, NA, 13, NA, 15, 20 };
    int N[] = { 5, 7, 9, 25 };
    int n = sizeof(N) / sizeof(N[0]);
    int m = sizeof(mPlusN) / sizeof(mPlusN[0]) - n;
 
    /*Move the m elements at the end of mPlusN*/
    moveToEnd(mPlusN, m + n);

    for (int i = 0; i < m + n; i++)
        printf("%d ", mPlusN[i]);

    printf("\n");
    /*Merge N[] into mPlusN[] */
    merge(mPlusN, N, m, n);
 
    /* Print the resultant mPlusN */
    printArray(mPlusN, m + n);
 
    return 0;
}
/* Merge two sorted arrays */
#include<stdio.h>

void mergeArrays(int arr1[], int arr2[], int n1,
                             int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;

    // Traverse both array
    while (i<n1 && j <n2)
    {
        // Check if current element of first
        // array is smaller than current element
        // of second array. If yes, store first
        // array element and increment first array
        // index. Otherwise do same with second array
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    // Store remaining elements of first array
    while (i < n1)
        arr3[k++] = arr1[i++];

    // Store remaining elements of second array
    while (j < n2)
        arr3[k++] = arr2[j++];
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8, 9, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);

    for (int i=0; i < n1+n2; i++)
	    printf("%d ", arr3[i]);

    return 0;
}
/* structure is used to return two values from minMax() */
#include<stdio.h>
struct pair
{
  int min;
  int max;
}; 
 
struct pair getMinMax(int arr[], int n)
{
  struct pair minmax;    
  int i;
   
  /*If there is only one element then return it as min and max both*/
  if (n == 1)
  {
     minmax.max = arr[0];
     minmax.min = arr[0];    
     return minmax;
  }   
 
  /* If there are more than one elements, then initialize min
      and max*/
  if (arr[0] > arr[1]) 
  {
      minmax.max = arr[0];
      minmax.min = arr[1];
  } 
  else
  {
      minmax.max = arr[1];
      minmax.min = arr[0];
  }   
 
  for (i = 2; i<n; i++)
  {
    if (arr[i] >  minmax.max)     
      minmax.max = arr[i];
   
    else if (arr[i] <  minmax.min)     
      minmax.min = arr[i];
  }
   
  return minmax;
}
 
/* Driver program to test above function */
int main()
{
  int arr[] = {1000, 11, 445, 1, 330, 3000};
  int arr_size = 6;
  struct pair minmax = getMinMax (arr, arr_size);
  printf("nMinimum element is %d", minmax.min);
  printf("nMaximum element is %d", minmax.max);
  getchar();
} 
#include <stdio.h>
 
int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}
 
int min(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}
 
int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}
 
int getMax(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = max(res, arr[i]);
    return res;
}
 
int main()
{
    int arr[] = { 12, 1234, 45, 67, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Minimum element of array: %d \n",
           getMin(arr, n));
    printf("Maximum element of array: %d \n",
           getMax(arr, n));
    return 0;
}
/* C program to find the missing Number */

#if 0
#include <stdio.h>
 
int getMissingNo(int a[], int n)
{
    int n_elements_sum = n * (n + 1) / 2;
    int sum = 0;
 
    for (int i = 0; i < n - 1; i++)
        sum += a[i];
    return n_elements_sum - sum;
}
 
int main()
{
    //int a[] = { 1, 2, 4, 5, 6 };
    int a[] = {0, 1, 2, 4, 5, 6, 7, 10};
    int n = sizeof(a) / sizeof(a[0])+1 ;
    int miss = getMissingNo(a, n);
    printf("%d\n",miss);
    return 0;
}
#endif

#include <stdio.h>

/* getMissingNo takes array and size of array as arguments*/
int getMissingNo(int a[], int n)
{
    int i;
    int x1 = a[0]; /* For xor of all the elements in array */
    int x2 = 1; /* For xor of all the elements from 1 to n+1 */

    for (i = 1; i < n; i++)
        x1 = x1 ^ a[i];

    for (i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;

    return (x1 ^ x2);
}

/*program to test above function */
int main()
{
    int a[] = {0, 1, 2, 4, 5, 6, 7, 10};
    int miss = getMissingNo(a, 8);
    printf("%d\n", miss);
}

/* 
 * Find the smallest positive number missing from an unsorted array
 *
 * 1) Segregate positive numbers from others i.e., move all non-positive numbers to left side
 * 2) Now we can ignore non-positive elements and consider only the part of array which contains all positive elements
 * 3) The smallest positive integer is 1. First we will check if 1 is present in the array or not. If it is not present then 1 is the answer

for(int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            ptr = 1;
            break;
        }
    }
 
int segregate(int arr[], int size)
{
    int j = 0, i;
    for (i = 0; i < size; i++) {
        if (arr[i] <= 0) {
            swap(&arr[i], &arr[j]);
            j++; // increment count of non-positive integers
        }
    }
 
    return j;
}

*/
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
/* Segregate 0s and 1s in an array 

1) Count the number of 0s. So let’s understand with an example we have an array arr = [0, 1, 0, 1, 0, 0, 1] the size of the array is 7 
now we will traverse the entire array and find out the number of zeros in the array, In this case the number of zeros is 4 so now we can 
easily get the number of Ones in the array by Array Length – Number Of Zeros.

2) Once we have counted, we can fill the array first we will put the zeros and then ones (we can get number of ones by using above formula).

*/
#include<stdio.h>
void segregate0and1(int arr[], int n)
{
    int count = 0; // Counts the no of zeros in arr

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1)
            count++;
    }

    // Loop fills the arr with 0 until count
    for (int i = 0; i < count; i++)
        arr[i] = 1;

    // Loop fills remaining arr space with 1
    for (int i = count; i < n; i++)
        arr[i] = 0;
}

void print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
	    printf("%d ", arr[i]);

    printf("\n");
}

int main()
{
    int arr[] = { 0, 1, 0, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    segregate0and1(arr, n);
    print(arr, n);

    return 0;
}
void multiply(int mat1[][N], int mat2[][N], int res[][N])
{
    int i, j, k;

    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < N; j++) 
	{
            res[i][j] = 0;

            for (k = 0; k < N; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}
#include<stdio.h> 
// Swap Function.
void swap(int *a,int *b){
  int temp =*a;
  *a=*b;
  *b=temp;
}
   
// Using Dutch National Flag Algorithm.
void reArrange(int arr[],int n){
      int low =0,high = n-1;
      while(low<high){
      if(arr[low]<0){
          low++;
      }else if(arr[high]>0){
          high--;
      }else{
        swap(&arr[low],&arr[high]);
      }
    }
}
void displayArray(int arr[],int n){
  for(int i=0;i<n;i++){
	 printf("%d ", arr[i]);
  }
}
int main() {
    // Data
    int arr[] = {1, 2,  -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2,  1};
      int n = sizeof(arr)/sizeof(arr[0]);
      reArrange(arr,n);
    displayArray(arr,n);
    return 0;
}

/*
void segregateElements(int arr[], int n)
{
    // Create an empty array to store result
    int temp[n];
 
    // Traversal array and store +ve element in
    // temp array
    int j = 0; // index of temp
    for (int i = 0; i < n ; i++)
        if (arr[i] >= 0 )
            temp[j++] = arr[i];
 
    // If array contains all positive or all negative.
    if (j == n || j == 0)
        return;
 
    // Store -ve element in temp array
    for (int i = 0 ; i < n ; i++)
        if (arr[i] < 0)
            temp[j++] = arr[i];
 
    // Copy contents of temp[] to arr[]
    memcpy(arr, temp, sizeof(temp));
}
*/
// C program to find the element
// occurring odd number of times
#include <stdio.h>
 
int getOddOccurrence(int ar[], int ar_size)
{
    int res = 0;
    for (int i = 0; i < ar_size; i++)    
        res = res ^ ar[i];
     
    return res;
}
 
int main()
{
    int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    int n = sizeof(ar) / sizeof(ar[0]);
     
    printf("%d\n", getOddOccurrence(ar, n));
    return 0;
}
/* Count occurrences of a number in a sorted array with duplicates */

/*
Input:  nums[] = [2, 5, 5, 5, 6, 6, 8, 9, 9, 9]
target = 5
 
Output: Target 5 occurs 3 times
 
 
Input:  nums[] = [2, 5, 5, 5, 6, 6, 8, 9, 9, 9]
target = 6
 
Output: Target 6 occurs 2 times
*/

#include <stdio.h>
 
// Function to find the first or last occurrence of a given number in
// a sorted integer array. If `searchFirst` is true, return the
// first occurrence of the number; otherwise, return its last occurrence.
int binarySearch(int nums[], int n, int target, int searchFirst)
{
    // search space is nums[low…high]
    int low = 0, high = n - 1;
 
    // initialize the result by -1
    int result = -1;
 
    // loop till the search space is exhausted
    while (low <= high)
    {
        // find the mid-value in the search space and compares it with the target
        int mid = (low + high)/2;
 
        // if the target is found, update the result
        if (target == nums[mid])
        {
            result = mid;
 
            // go on searching towards the left (lower indices)
            if (searchFirst) {
                high = mid - 1;
            }
            // go on searching towards the right (higher indices)
            else {
                low = mid + 1;
            }
        }
 
        // if the target is less than the middle element, discard the right half
        else if (target < nums[mid]) {
            high = mid - 1;
        }
        // if the target is more than the middle element, discard the left half
        else {
            low = mid + 1;
        }
    }
 
    // return the found index or -1 if the element is not found
    return result;
}
 
int main(void)
{
    int nums[] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int target = 5;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    // pass value 1 for the first occurrence
    int first = binarySearch(nums, n, target, 1);
 
    // pass value 0 for the last occurrence
    int last = binarySearch(nums, n, target, 0);
 
    int count = last - first + 1;
 
    if (first != -1) {
        printf("Element %d occurs %d times", target, count);
    }
    else {
        printf("Element not found in the array");
    }
 
    return 0;
}

/* C program to segregate even and odd elements of array */

#include<stdio.h>
 
/* UTILITY FUNCTIONS */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Function to swap *a and *b */
void swap(int *a, int *b);
 
void segregateEvenOdd(int arr[], int size)
{
    /* Initialize left and right indexes */
    int left = 0, right = size-1;
    while (left < right)
    {
        /* Increment left index while we see 0 at left */
        while (arr[left]%2 == 0 && left < right)
            left++;
 
        /* Decrement right index while we see 1 at right */
        while (arr[right]%2 == 1 && left < right)
            right--;

        if (left < right)
        {
            /* Swap arr[left] and arr[right]*/
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
 
 
/* driver program to test */
int main()
{
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
 
    segregateEvenOdd(arr, arr_size);
 
    printf("Array after segregation ");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    printf("\n"); 
    return 0;
}
#include <stdio.h>
 
//Size of the created array
#define ARRAY_SIZE  8
 
void ReadArray(int acData[ARRAY_SIZE])
{
 int index = 0;
 
 for(index= 0; index < ARRAY_SIZE; ++index)
 {
 printf("%d\n",acData[index]);
 
 }
}
 
 
 
int main(int argc, char *argv[]) 
{
 //Create an array
 int aiData[ARRAY_SIZE] = {1,2,3,4,5,6,7,8}; 
 
  //Pass array as a parameter
  ReadArray(aiData);
  
 return 0;
}
#include <stdio.h>
 
//Size of the created array
#define ARRAY_SIZE  8
 
void ReadArray(int acData[])
{
 int index = 0;
 
 for(index= 0; index < ARRAY_SIZE; ++index)
 {
 printf("%d\n",acData[index]);
 
 }
}
 
 
 
int main(int argc, char *argv[]) 
{
 //Create an array
 int aiData[ARRAY_SIZE] = {1,2,3,4,5,6,7,8}; 
 
  //Pass array as a parameter
  ReadArray(aiData);
  
 return 0;
}
#include<stdio.h>
#include<stdlib.h>
 
void printRepeating(int arr[], int size)
{
  int *count = (int *)calloc(sizeof(int), (size));
  int i;
   
  printf(" Repeating elements are ");
  for(i = 0; i < size; i++)
  { 
    if(count[arr[i]] == 1)
     // printf(" %d ", arr[i]);
     continue;
    else{
      printf(" %d ", arr[i]);
     count[arr[i]]++;
    }
  }   
}    
 
int main()
{
//  int arr[] = {4, 2, 4, 5, 2, 3, 1};
  int arr[] = {0, 4, 3, 2, 7, 8, 2, 3, 1};
  int arr_size = sizeof(arr)/sizeof(arr[0]); 
  printRepeating(arr, arr_size);
  getchar();
  return 0;
}
#include<stdio.h>
#include<stdlib.h>
void printRepeating(int arr[], int size)
{
  int i, j;
  printf(" Repeating elements are ");
  for(i = 0; i < size-1; i++)
    for(j = i+1; j < size; j++)
      if(arr[i] == arr[j])
        printf(" %d ", arr[i]);
}    
 
int main()
{
  int arr[] = {4, 2, 4, 5, 2, 3, 1};
  int arr_size = sizeof(arr)/sizeof(arr[0]); 
  printRepeating(arr, arr_size);
  getchar();
  return 0;
}
// Function to remove duplicate elements
// This function returns new size of modified
// array.
int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1)
        return n;
 
    // To store index of next unique element
    int j = 0;
 
    // Doing same as done in Method 1
    // Just maintaining another updated index i.e. j
    for (int i=0; i < n-1; i++)
    {
        if (arr[i] != arr[i+1]) 
	{
            arr[j] = arr[i];
	    j++;
	}
    }
 
    arr[j] = arr[n-1];
 
    return j;
}
// C program to update every array element with
// multiplication of previous and next numbers in array
#include<stdio.h> 
void modify(int arr[], int n)
{
    // Nothing to do when array size is 1
    if (n <= 1)
      return;
 
    // store current value of arr[0] and update it
    int prev = arr[0];
    arr[0] = arr[0] * arr[1];
 
    // Update rest of the array elements
    for (int i=1; i<n-1; i++)
    {
        // Store current value of next interaction
        int curr = arr[i];
 
        // Update current value using previous value
        arr[i] = prev * arr[i+1];
 
        // Update previous value
        prev = curr;
    }
 
    // Update last array element
    arr[n-1] = prev * arr[n-1];
}
 
// Driver program
int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    modify(arr, n);
    for (int i=0; i<n; i++)
	    printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
#include<stdio.h>
 
void rvereseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];  
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }  
}    
 
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
 
  printf("\n");
}
 
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    rvereseArray(arr, 0, n-1);
    printf("Reversed array is \n");
    printArray(arr, n);   
    return 0;
}
/* Find the row with maximum number of 1s */

int rowWithMax1s(bool mat[R][C]) 
{
    int rowIndex = -1 ;
    int maxCount = 0 ;

    for(int i = 0 ; i < R ; i++)
    {
        int count = 0 ;
        for(int j = 0 ; j < C ; j++ )
	{
            if(mat[i][j] == 1)
                count++;
        }
        if(count > maxCount)
	{
            maxCount = count;
            rowIndex = i;
        }
    }

    return rowIndex ;
}
// C Program to check if two
// given matrices are identical
#include <stdio.h>
#define N 4
 
// This function returns 1 if A[][] and B[][] are identical
// otherwise returns 0
int areSame(int A[][N], int B[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            if (A[i][j] != B[i][j])
                return 0;
    return 1;
}
//How to find sizeof array in C/C++ without using sizeof?

#include <stdio.h>
 
int main(int argc, char *argv[]) {
 
 int iTotalElement = 0 ; 
 int  aiData[] = {10, 20, 30, 40, 50, 60};
 
 //Calculate numbers of elements using pointer arithmatic
    iTotalElement = *(&aiData + 1) - aiData;
   
    printf("Number of element = %d",iTotalElement);
    
 return 0;
}
// C program to find smallest and second smallest elements
#include <stdio.h>
#include <limits.h> /* For INT_MAX */
 
void print2Smallest(int arr[], int arr_size)
{
    int i, first, second;
 
    /* There should be atleast two elements */
    if (arr_size < 2)
    {
        printf(" Invalid Input ");
        return;
    }
 
    first = second = INT_MAX;
    for (i = 0; i < arr_size ; i ++)
    {
        /* If current element is smaller than first
           then update both first and second */
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
 
        /* If arr[i] is in between first and second
           then update second  */
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MAX)
        printf("There is no second smallest element\n");
    else
        printf("The smallest element is %d and second "
               "Smallest element is %d\n", first, second);
}
 
/* Driver program to test above function */
int main()
{
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    print2Smallest(arr, n);
    return 0;
}
void subtract(int A[][N], int B[][N], int C[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            C[i][j] = A[i][j] - B[i][j];
}
/* C Program to find sum of elements
 in a given array */
#include<stdio.h>

int sum(int arr[], int n)
{
    int sum = 0; // initialize sum
  
    for (int i = 0; i < n; i++)
    sum += arr[i];
  
    return sum;
}
  
int main()
{
    int arr[] = {12, 3, 4, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of given array is %d\n", sum(arr, n));
    return 0;
}
