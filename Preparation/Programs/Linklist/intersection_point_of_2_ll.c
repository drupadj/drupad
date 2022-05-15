/* find intersection of two Linked Lists using Length */

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

node *find_intersection(node *p , node *q)
{
	node *larger , *smaller;
	int m , n , d , cnt;
	m = find_length(p);   //calculate length
	n = find_length(q);
	
	d = m-n;  //find difference
	if(d < 0)  //find absolute value
	{
		d = d * -1;
	}
	
	if(m > n) //   find larger length linked list
		{
			larger = p;
			smaller = q;
		}
	else
		{
			larger = q;
			smaller = p;
		}
		
	cnt = 0;
	while(cnt < d)    // move d nodes in larger linked list
	{
		larger = larger->next;
		cnt++;
	}
	
	while(larger != smaller)   // then move one step each in both linked lists
	{
		larger = larger->next;
		smaller= smaller->next;
	}
	
	return larger;   // this is the intersection
	
}
