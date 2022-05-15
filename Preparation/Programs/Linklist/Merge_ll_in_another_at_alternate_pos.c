/* Merge a linked list into another linked list at alternate positions 
 *
 *The idea is to run a loop while there are available positions in first loop and insert nodes of second list by changing pointers
 *
 *
 * */

// Main function that inserts nodes of linked list q into p at
// alternate positions. Since head of first list never changes
// and head of second list  may change, we need single pointer
// for first list and double pointer for second list.
void merge(struct Node *p, struct Node **q)
{
     struct Node *p_curr = p, *q_curr = *q;
     struct Node *p_next, *q_next;

     // While there are available positions in p
     while (p_curr != NULL && q_curr != NULL)
     {
         // Save next pointers
         p_next = p_curr->next;
         q_next = q_curr->next;

         // Make q_curr as next of p_curr
         q_curr->next = p_next;  // Change next pointer of q_curr
         p_curr->next = q_curr;  // Change next pointer of p_curr

         // Update current pointers for next iteration
         p_curr = p_next;
         q_curr = q_next;
    }

    *q = q_curr; // Update head pointer of second list
}
