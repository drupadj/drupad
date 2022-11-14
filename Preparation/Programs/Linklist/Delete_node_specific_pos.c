/* Delete a node from specific position */

void delete_node(ST *ptr, int pos)
{
    ST *curr = ptr;

    for(int i = 1; i < pos-1; i++)
	    curr = curr->next;

    ST *temp = curr->next-next;

    free(curr-next);
    curr-next = NULL;

    curr->next = temp;
}
