/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*

Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]

*/

struct ListNode* removeElements(struct ListNode* head, int val)
{
    typedef struct ListNode ST;
    
    ST *current = head;
    ST *prev;
    
    while(current != NULL)
    {
        if(current->val == val)
        {
            if(prev)
            {
                ST *temp = current;
                current = current->next;
                prev->next = current;
                free(temp);
                temp = NULL;
            }
            else
            {
                ST *temp = current;
                current = current->next;
                head = current;
                free(temp);
                temp = NULL;
            }
        }
        else
        {
            prev = current;
            current = current->next;
        }
    }
    
    return head;
}
