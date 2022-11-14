/*  Reverse Linked List */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
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
