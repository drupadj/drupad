/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
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
