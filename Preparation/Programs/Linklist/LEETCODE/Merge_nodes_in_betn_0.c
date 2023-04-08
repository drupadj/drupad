/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head)
{
    typedef struct ListNode ST;
    
    ST* temp1 = head->next;
    
    ST* temp2 = head;
    
    while(temp1->next!=NULL)
    {
        if(temp1->val!=0)
        {
            temp2->val+= temp1->val;    
        }
        else
        {
            temp2->next = temp1;
            temp2 = temp1;
        }
        
        temp1 = temp1->next;
    }
    
    temp2->next = NULL;
    
    return head;
}
