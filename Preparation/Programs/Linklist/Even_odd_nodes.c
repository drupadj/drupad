/* Segregate even and odd nodes in a Linked List */

/*

Input: 17->15->8->12->10->5->4->1->7->6->NULL
Output: 8->12->10->4->6->17->15->5->1->7->NULL

Input: 8->12->10->5->4->1->6->NULL
Output: 8->12->10->4->6->5->1->NULL

// If all numbers are even then do not change the list
Input: 8->12->10->NULL
Output: 8->12->10->NULL

// If all numbers are odd then do not change the list
Input: 1->3->5->7->NULL
Output: 1->3->5->7->NULL

*/

/*

The idea is to split the linked list into two: one containing all even nodes and other containing all odd nodes. And finally, attach the odd node linked list after the even node linked list.
To split the Linked List, traverse the original Linked List and move all odd nodes to a separate Linked List of all odd nodes. At the end of loop, the original list will have all the even nodes and the odd node list will have all the odd nodes. To keep the ordering of all nodes same, we must insert all the odd nodes at the end of the odd node list. And to do that in constant time, we must keep track of last pointer in the odd node list

*/

// Function to segregate even and odd nodes.
void segregateEvenOdd(struct Node **head_ref)
{
    // Starting node of list having
    // even values.
    Node *evenStart = NULL;

    // Ending node of even values list.
    Node *evenEnd = NULL;

    // Starting node of odd values list.
    Node *oddStart = NULL;

    // Ending node of odd values list.
    Node *oddEnd = NULL;

    // Node to traverse the list.
    Node *currNode = *head_ref;

    while(currNode != NULL){
        int val = currNode -> data;

        // If current value is even, add
        // it to even values list.
        if(val % 2 == 0) {
            if(evenStart == NULL){
                evenStart = currNode;
                evenEnd = evenStart;
            }

            else{
                evenEnd -> next = currNode;
                evenEnd = evenEnd -> next;
            }
        }

        // If current value is odd, add
        // it to odd values list.
        else{
            if(oddStart == NULL){
                oddStart = currNode;
                oddEnd = oddStart;
            }
            else{
                oddEnd -> next = currNode;
                oddEnd = oddEnd -> next;
            }
        }

        // Move head pointer one step in
        // forward direction
        currNode = currNode -> next;
    }

    // If either odd list or even list is empty,
    // no change is required as all elements
    // are either even or odd.
    if(oddStart == NULL || evenStart == NULL){
        return;
    }

    // Add odd list after even list.
    evenEnd -> next = oddStart;
    oddEnd -> next = NULL;

    // Modify head pointer to
    // starting of even list.
    *head_ref = evenStart;
}
