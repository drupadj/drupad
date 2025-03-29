/* Pairwise swap elements of a given linked list */

/*

I/P : 1,2,3,4
O/P : 2,1,4,3

*/



/* Function to pairwise swap elements of a linked list */
void pairWiseSwap(struct Node* head)
{
    struct Node* temp = head;

    /* Traverse further only if there are at-least two nodes left */
    while (temp != NULL && temp->next != NULL) {
        /* Swap data of node with its next node's data */
        swap(&temp->data, &temp->next->data);

        /* Move temp by 2 for the next pair */
        temp = temp->next->next;
    }
}

/* UTILITY FUNCTIONS */
/* Function to swap two integers */
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
