/* Merge two sorted linked lists such that merged list is in reverse order */

/*
Input:  a: 5->10->15->40
        b: 2->3->20 
Output: res: 40->20->15->10->5->3->2

Input:  a: NULL
        b: 2->3->20 
Output: res: 20->3->2
*/

/*

A Simple Solution is to do following.
1) Reverse first list ‘a’.
2) Reverse second list ‘b’.
3) Merge two reversed lists

Another Simple Solution is first Merge both lists, then reverse the merged list.
Both of the above solutions require two traversals of linked list

How to solve without reverse, O(1) auxiliary space (in-place) and only one traversal of both lists? 

The idea is to follow merge style process. Initialize result list as empty. Traverse both lists from beginning to end. Compare current nodes of both lists and insert smaller of two at the beginning of the result list

1) Initialize result list as empty: res = NULL.
2) Let 'a' and 'b' be heads first and second lists respectively.
3) While (a != NULL and b != NULL)
    a) Find the smaller of two (Current 'a' and 'b')
    b) Insert the smaller value node at the front of result.
    c) Move ahead in the list of smaller node.
4) If 'b' becomes NULL before 'a', insert all nodes of 'a'
   into result list at the beginning.
5) If 'a' becomes NULL before 'b', insert all nodes of 'a'
   into result list at the beginning.

*/

// Given two non-empty linked lists 'a' and 'b'
Node* SortedMerge(Node *a, Node *b)
{
    // If both lists are empty
    if (a==NULL && b==NULL) return NULL;

    // Initialize head of resultant list
    Node *res = NULL;

    // Traverse both lists while both of then
    // have nodes.
    while (a != NULL && b != NULL)
    {
        // If a's current value is smaller or equal to
        // b's current value.
        if (a->key <= b->key)
        {
            // Store next of current Node in first list
            Node *temp = a->next;

            // Add 'a' at the front of resultant list
            a->next = res;
            res = a;

            // Move ahead in first list
            a = temp;
        }

        // If a's value is greater. Below steps are similar
        // to above (Only 'a' is replaced with 'b')
        else
        {
            Node *temp = b->next;
            b->next = res;
            res = b;
            b = temp;
        }
    }

    // If second list reached end, but first list has
    // nodes. Add remaining nodes of first list at the
    // front of result list
    while (a != NULL)
    {
        Node *temp = a->next;
        a->next = res;
        res = a;
        a = temp;
    }

    // If first list reached end, but second list has
    // node. Add remaining nodes of first list at the
    // front of result list
    while (b != NULL)
    {
        Node *temp = b->next;
        b->next = res;
        res = b;
        b = temp;
    }

    return res;
}
