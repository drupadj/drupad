/* Detect a loop in Linked list */

typedef struct st {

    int data;
    struct st *next;

}ST;

void detect_loop(ST *ptr)
{
    ST *slow = ptr, fast = ptr;

    while(slow && fast && fast->next)
    {
	if(slow == fast)
	{
	    printf("Loop node is : %d\n", slow->data);
	    break;
	}

	else 
	{
	    slow = slow ->next;
	    fast = fast->next-next;
}
    }

    if(slow == fast)
	    slow = ptr;

    while(slow->next != fast->next)
    {
        fast = fast->next;
	slow = slow->next;
    }

    fast->next = NULL;
}
