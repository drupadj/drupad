/* Convert Binary Number in a Linked List to Integer */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*

Input: head = [1,0,1]
Output: 5

*/
int getDecimalValue(struct ListNode* head)
{
    int res = 0;
    
    while (head != NULL)
    {
        res = (res << 1) + head->val;
        
        head = head->next;
    }
    
    return res;
}
