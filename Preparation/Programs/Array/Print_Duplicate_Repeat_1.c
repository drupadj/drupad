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
