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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head)
{
    typedef struct ListNode ST;
    int val = 0;
    ST *evenstart = NULL;
    ST *evenend = NULL;
    ST *oddstart = NULL;
    ST *oddend = NULL;

    ST *curr = head;

    while (curr != NULL)
    {
        val = curr -> val;

        if (val % 2 == 0)
        {
            if (evenstart == NULL)
            {
                evenstart = curr;
                evenend = evenstart;
            }
            else
            {
                evenend -> next = curr;
                evenend = evenend -> next;
            }
        }
        else
        {
             if(oddstart == NULL)
             {
                oddstart = curr;
                oddend = oddstart;
            }
            else{
                oddend -> next = curr;
                oddend = oddend -> next;
            }   
        }
        curr = curr -> next;
    }
    // If either odd list or even list is empty,
    // no change is required as all elements
    // are either even or odd.
    if(oddstart == NULL || evenstart == NULL)
    {
        return;
    }

    // Add odd list after even list.
    evenend -> next = oddstart;
    oddend -> next = NULL;

    // Modify head pointer to
    // starting of even list.
    head = evenstart;

    return head;
}

