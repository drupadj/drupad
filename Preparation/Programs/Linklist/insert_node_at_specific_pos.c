/* insert a node at specific position */

void insert_node(ST *ptr, int pos)
{
    ST *temp = (ST *)malloc(sizeof(ST));

    scanf("%d", temp->data);

    if(pos == 1)
    {
        temp->next = *ptr;
	*ptr = temp;
    }

    else
    {
        ST *curr = ptr;

        for(int i = 1; i < pos-1; i++)
	        curr = curr->next;

        temp->next = curr->next;

        curr->next = temp;
    }
}
