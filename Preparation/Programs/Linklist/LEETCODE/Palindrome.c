/*

Is it a palindrome for singly-linked list?

1. Determine the mid point of the given linked list (by using 2 pointers)
2. Reverse the second half of the linked list
3. Compare the linked list values 

Determine the midpoint by using 2 pointers.
Fast pointer — Initially set to the same as head pointer, will move 2x faster than the slow pointer until it reaches the end
Slow pointer — Initially set to the same as head pointer, will move 1 node at a time along with the fast pointer.

Reverse 2nd half of Linked List
How can we reverse a linked list in general?

As we go through the linked list, we want our first node to be the last therefore it’s next pointer should point to null. With a prev, head and temp pointer we can have the head’s next point to the prev node and continue to do this as we move through the list. We need to have a temp pointer so the head knows which node to go to next.

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*

Input: head = [1,2,2,1]
Output: true

*/

typedef struct ListNode ST;

struct ListNode* reverseList(struct ListNode* head)
{
    typedef struct ListNode ST;

    ST *prev = NULL;
    ST *current = head;
    ST *next = NULL;

    while (current != NULL)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

bool isPalindrome(struct ListNode* head)
{
    if(!head )
        return false;
    
    ST* slow = head;
    ST* fast = head;

    while(fast && fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    /* reverse second half of LinkedList */
    slow = reverseList(slow);
    fast = head;

    while(slow && fast)
    {
        if(slow->val != fast->val)
            return false;
    
        slow = slow->next;
        fast = fast->next;
    }
    
    return true;
}
