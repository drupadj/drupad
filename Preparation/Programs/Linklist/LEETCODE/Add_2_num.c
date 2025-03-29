/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*

Input: l1 = [7,2,4,3], l2 = [5,6,4]
Output: [7,8,0,7]

*/

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    typedef struct ListNode ST;

    int len1 = 0, len2 = 0, val = 0;

    ST *h1 = l1, *h2 = l2;
    
    while (h1 != NULL) 
    {
        len1++;
        h1 = h1->next;
    }
    while (h2 != NULL) 
    {
        len2++;
        h2 = h2->next;
    }

    h1 = l1;
    h2 = l2;

    ST *head = NULL;

    while (len1 > 0 && len2 > 0) 
    {
        val = 0;

        if (len1 >= len2) 
        {
            val += h1->val;
            h1 = h1->next;
            len1--;
        }
        if (len2 > len1) 
        {
            val += h2->val;
            h2 = h2->next;
            len2--;
        }

        ST *newnode = (ST *)malloc(sizeof(ST));
        newnode->val = val;
        newnode->next = head;
        head = newnode;        
    }

    ST *temp = head;
    int carry = 0;
    while (temp != NULL) 
    {
        carry = (temp->val)/10;
        temp->val = temp->val % 10;
        if (temp->next != NULL)
        {
            temp->next->val = temp->next->val + carry;
        }
        else if (temp->next == NULL && carry)
        {
            ST *newnode = (ST *)malloc(sizeof(ST));
            newnode->val = carry;
            temp->next = newnode;
            newnode->next = NULL;
        }
        temp = temp->next;
    }
    ST *cur = head, *prev = NULL, *next = head;
    while (cur != NULL) 
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
    return head;
}
