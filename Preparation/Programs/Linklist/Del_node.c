/* Delete nodes which have a greater value on right side */

/*

Method 2 (Use Reverse)
Thanks to Paras for providing the below algorithm.
1. Reverse the list.
2. Traverse the reversed list. Keep max till now. If the next node is less than max, then delete the next node, otherwise max = next node.
3. Reverse the list again to retain the original order.

Given Linked List
 12 15 10 11 5 6 2 3
Modified Linked List
 15 11 6 3

*/

/* Deletes nodes which have greater value node(s) on left side */
void _delLesserNodes(struct Node* head)
{
    struct Node* current = head;

    /* Initialize max */
    struct Node* maxnode = head;
    struct Node* temp;

    while (current != NULL && current->next != NULL) {
        /* If current is smaller than max, then delete current */
        if (current->next->data < maxnode->data) {
            temp = current->next;
            current->next = temp->next;
            free(temp);
        }

        /* If current is greater than max, then update max and
            move current */
        else {
            current = current->next;
            maxnode = current;
        }
    }
}
