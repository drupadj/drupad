/*  Intersection of Two Linked Lists */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*

Input: intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
Output: Intersected at '2'

*/
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) 
{
    int c1 = 0;
    int c2 = 0;
    
    typedef struct ListNode ST;
    
    ST *ptr1 = headA;
    ST *ptr2 = headB;
    
    while(ptr1 != NULL || ptr2 != NULL)
    {
        if(ptr1 != NULL)
        {
            c1++;
            ptr1 = ptr1->next;
        }
        if(ptr2 != NULL)
        {
            c2++;
            ptr2 = ptr2->next;
        }
    }
    
    ptr1 = headA;
    ptr2 = headB;
    
    if(c1 > c2)
    {
        while(c1 - c2)
        {
            ptr1 = ptr1->next;
            c2++;
        }
    }
    else
    {
        while(c2 - c1)
        {
            ptr2 = ptr2->next;
            c1++;
        }
    }
    
    while(ptr1 != ptr2 && ptr1!=NULL && ptr2!=NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    
    return ptr2;
}


/* Method 2
 *
 * 1. Using stack, push and pop
 * 2. Push the first ll (Add a node via push)
 * 3. Push the second ll(Add a node via push)
 * 4. pop the nodes from stack and compare the addresses till we find the intersection points
 * 5. if adresses of ll1 and ll2 are equal then store them in temp variable
 * 6. Pop till ll1 and ll2 not equal, if not equal ll1 and ll2 then address in temp variable is the intersection point
 *
 * */

