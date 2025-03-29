/*  Reverse Linked List */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

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
