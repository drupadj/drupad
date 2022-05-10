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
