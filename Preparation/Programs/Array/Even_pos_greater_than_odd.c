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
