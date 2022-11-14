/* Merge Two Sorted Lists */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    typedef struct ListNode ST;
    
    ST *sorting = NULL;
    ST *head = NULL;
    
    if (list1 ==  NULL)
        return list2;
    
    if(list2 == NULL)
        return list1;
    
    if (list1 && list2)
    {
        if(list1 -> val <= list2 -> val)
        {
            sorting = list1;
            list1 = list1 -> next;
        }
        else
        {
            sorting = list2;
            list2 = list2 -> next;
        }
    }
    
    head = sorting;
    
    while (list1 && list2)
    {
        if(list1 -> val <= list2 -> val)
        {
            sorting -> next = list1;
            sorting = list1;
            list1 = sorting -> next;
        }
        else
        {
            sorting -> next = list2;
            sorting = list2;
            list2 = sorting -> next;
        }
    }
    
    if (list1 == NULL)
        sorting -> next = list2;
    
    if (list2 == NULL)
        sorting -> next = list1;
        
    return head;
}
