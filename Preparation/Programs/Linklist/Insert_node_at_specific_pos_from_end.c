/* Insert a node after the n-th node from the end */

/*

Method 2 (Single traversal):

1. This method uses two pointers, one is slow_ptr and the other is fast_ptr. 
2. First move the fast_ptr up to the nth node from the beginning. 
3. Make the slow_ptr point to the 1st node of the list. 
4. Now, simultaneously move both the pointers until fast_ptr points to the last node. 
5. At this point the slow_ptr will be pointing to the nth node from the end. 
6. Insert the new node after this node. This method requires single traversal of the list

*/

// function to insert a node after the
// nth node from the end
void insertAfterNthNode(Node* head, int n, int x)
{
    // if list is empty
    if (head == NULL)
        return;

    // get a new node for the value 'x'
    Node* newNode = getNode(x);

    // Initializing the slow and fast pointers
    Node* slow_ptr = head;
    Node* fast_ptr = head;

    // move 'fast_ptr' to point to the nth node
    // from the beginning
    for (int i = 1; i <= n - 1; i++)
        fast_ptr = fast_ptr->next;

    // iterate until 'fast_ptr' points to the
    // last node
    while (fast_ptr->next != NULL) {

        // move both the pointers to the
        // respective next nodes
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next;
    }

    // insert the 'newNode' by making the
    // necessary adjustment in the links
    newNode->next = slow_ptr->next;
    slow_ptr->next = newNode;
}
