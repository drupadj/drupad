/*

Is it a palindrome for singly-linked list?

1. Determine the mid point of the given linked list (by using 2 pointers)
2. Reverse the second half of the linked list
3. Compare the linked list values 

Determine the midpoint by using 2 pointers.
Fast pointer — Initially set to the same as head pointer, will move 2x faster than the slow pointer until it reaches the end
Slow pointer — Initially set to the same as head pointer, will move 1 node at a time along with the fast pointer.

Reverse 2nd half of Linked List
How can we reverse a linked list in general?

As we go through the linked list, we want our first node to be the last therefore it’s next pointer should point to null. With a prev, head and temp pointer we can have the head’s next point to the prev node and continue to do this as we move through the list. We need to have a temp pointer so the head knows which node to go to next.

*/
node *reverse(node *head)   //reverse the string (second part)
{
node *p , *q;
if(head == NULL)
return head;
p = head;
q = p->next;
if(q == NULL)
return p;
q = reverse(q);
p->next->next = p;
p->next = NULL;
return q;
}

void check_palindrome(node *start)
{
	node *p , *q ,*first_start,*second_start;
	p = start;
	q = start;
	
	if(p->next == NULL)          // if there is only one character in the string
	{
		printf("It is a palindrome");
		return;
	}
	//split the linked list
	while(1)
	{
		p = p->next->next;
		if(p == NULL)
		{
			second_start = q->next;
			break;
		}
		if(p->next == NULL)
		{
			second_start = q->next->next;
			break;
		}		
		q = q->next;		
	}	
	q->next = NULL;
	//reverse the second linked list
	second_start = reverse(second_start);	
//	printf(" \n second start  =  %d",second_start->data);	
	//now compare the splitted two linked lists
	first_start = start;
		
	while(first_start!=NULL && second_start!=NULL) //compare the two strings
	{		
		if(first_start->data == second_start->data)
		{
			first_start = first_start->next;
			second_start = second_start->next;
		}
		else
		{
			printf("\n Not a Palindrome");
			return;					
		}		
	}	
	printf("It is a palindrome");
}

