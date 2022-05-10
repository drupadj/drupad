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
