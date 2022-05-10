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
