/* Delete a middle node */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*

Input: head = [1,3,4,7,1,2,6]
Output: [1,3,4,1,2,6]

*/

struct ListNode* deleteMiddle(struct ListNode* head)
{
    typedef struct ListNode ST;

    ST *slow = head, *fast = head, *prv = NULL;

    while(fast != NULL && fast ->next != NULL)
    {
        fast = fast -> next -> next;
        prv = slow;
        slow = slow -> next;
    }
    prv -> next = slow -> next;
    free(slow);
    slow = NULL;

    return head;
}
