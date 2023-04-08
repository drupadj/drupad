/* Swap the nodes without swapping data 
 *
 * Swap Kth node from beginning with Kth node from end in a Linked List
 *
 * 3 cases :
 *
 * 1. Either one of the node is head
 * 2. Either one of the node is last node
 * 3. Internal nodes
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k)
{
    typedef struct ListNode ST;
    int count = 0;
    int first_val = 0 , second_val = 0;
    ST* first_node, *second_node;
    ST* current = head;
    
    /* Traverse to count the lenght of list and find first node to swap */
    while(current != NULL)
    {
         count++;
         if(count == k)
         {
            first_val = current->val;
            first_node = current;
         }
        current = current->next;     
    }

    /* Traverse once again until second node to swap */
    current = head;
    
    while(count != k)
    {
        current = current->next;
        count--;
    }
    
    
    // Swap
    second_node = current;
    second_val = current->val;
    
    second_node->val = first_val;
    first_node->val = second_val;
    
    return head;

}




