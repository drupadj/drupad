/*

Given only a pointer to a node to be deleted in a singly linked list, how do you delete it?

The fast solution is to copy the data from the next node to the node to be deleted and delete the next node

Input: head = [4,5,1,9], node = 5
Output: [4,1,9]

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) 
{
    typedef struct ListNode ST;
    
    ST* temp = node->next;
    node->val = temp->val;
    node->next = temp->next;
    free(temp);
    temp->next = NULL;
}


