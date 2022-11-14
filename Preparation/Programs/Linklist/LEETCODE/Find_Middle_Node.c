/* Middle of the Linked List */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head)
{

  typedef struct ListNode ST;
    
  ST *slow = head;
  ST *fast = head;
    
  while(fast != NULL && fast -> next != NULL)
  {
      fast = fast -> next -> next;
      slow = slow -> next;
  }
    
  return slow;
}
