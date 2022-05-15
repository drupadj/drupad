/* Merge two unsorted linked lists to get a sorted list */

/*
Input: List 1 = 3 -> 1 -> 5, List 2 = 6-> 2 -> 4
Output: 1 -> 2 -> 3 -> 4 -> 5 -> 6

Input: List 1 = 4 -> 7 -> 5, List 2 = 2-> 1 -> 8 -> 1
Output: 1 -> 1 -> 2 -> 4 -> 5 -> 7 -> 8


Naive Approach: The naive approach is to sort the given linked lists and then merge the two sorted linked lists together 
into one list in increasing order.

To solve the problem mentioned above the naive method is to sort the two linked lists individually and merge the two linked lists together into one list which is in increasing order.

Efficient Approach: To optimize the above method we will concatenate the two linked lists and then sort it using any sorting algorithm. Below are the steps: 

Concatenate the two lists by traversing the first list until we reach it’s a tail node and then point the next of the tail node to the head node of the second list. Store this concatenated list in the first list.
Sort the above-merged linked list. Here, we will use a bubble sort. So, if node->next->data is less then node->data, then swap the data of the two adjacent nodes.

*/


