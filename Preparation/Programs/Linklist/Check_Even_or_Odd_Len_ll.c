/* check even or odd length linked list */

void check_even_odd_length(node *start)
{
	node *p;
	p = start;
	while(1)
	{
		if(p == NULL)
		{
			printf("Even");
			break;
		}

		if(p->next == NULL)
		{
			printf("odd");
			break;
		}

		p = p->next->next;
	}

}
