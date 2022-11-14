/* Remove Duplicates from Sorted List */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head)
{
    typedef struct ListNode ST;
    
    ST* ret = head;
    
    while(head && head->next)
    {
        if(head->val == head->next->val)
            head->next = head->next->next;
        else
            head = head->next;
    }
    return ret;
}
