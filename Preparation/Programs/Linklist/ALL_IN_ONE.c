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
/* Segregate even and odd nodes in a Linked List */

/*

Input: 17->15->8->12->10->5->4->1->7->6->NULL
Output: 8->12->10->4->6->17->15->5->1->7->NULL

Input: 8->12->10->5->4->1->6->NULL
Output: 8->12->10->4->6->5->1->NULL

// If all numbers are even then do not change the list
Input: 8->12->10->NULL
Output: 8->12->10->NULL

// If all numbers are odd then do not change the list
Input: 1->3->5->7->NULL
Output: 1->3->5->7->NULL

*/

/*

The idea is to split the linked list into two: one containing all even nodes and other containing all odd nodes. And finally, attach the odd node linked list after the even node linked list.
To split the Linked List, traverse the original Linked List and move all odd nodes to a separate Linked List of all odd nodes. At the end of loop, the original list will have all the even nodes and the odd node list will have all the odd nodes. To keep the ordering of all nodes same, we must insert all the odd nodes at the end of the odd node list. And to do that in constant time, we must keep track of last pointer in the odd node list

*/

// Function to segregate even and odd nodes.
void segregateEvenOdd(struct Node **head_ref)
{
    // Starting node of list having
    // even values.
    Node *evenStart = NULL;

    // Ending node of even values list.
    Node *evenEnd = NULL;

    // Starting node of odd values list.
    Node *oddStart = NULL;

    // Ending node of odd values list.
    Node *oddEnd = NULL;

    // Node to traverse the list.
    Node *currNode = *head_ref;

    while(currNode != NULL){
        int val = currNode -> data;

        // If current value is even, add
        // it to even values list.
        if(val % 2 == 0) {
            if(evenStart == NULL){
                evenStart = currNode;
                evenEnd = evenStart;
            }

            else{
                evenEnd -> next = currNode;
                evenEnd = evenEnd -> next;
            }
        }

        // If current value is odd, add
        // it to odd values list.
        else{
            if(oddStart == NULL){
                oddStart = currNode;
                oddEnd = oddStart;
            }
            else{
                oddEnd -> next = currNode;
                oddEnd = oddEnd -> next;
            }
        }

        // Move head pointer one step in
        // forward direction
        currNode = currNode -> next;
    }

    // If either odd list or even list is empty,
    // no change is required as all elements
    // are either even or odd.
    if(oddStart == NULL || evenStart == NULL){
        return;
    }

    // Add odd list after even list.
    evenEnd -> next = oddStart;
    oddEnd -> next = NULL;

    // Modify head pointer to
    // starting of even list.
    *head_ref = evenStart;
}
/*
   Alternate Odd and Even Nodes in a Singly Linked List

1. Segregate odd and even values in the list. After this, all odd values will occur together followed by all even values.
2. Split the list into two lists odd and even.
3. Merge the even list into odd list

   Add Two Numbers Represented by Linked Lists

   Following are the steps: 

1. Reverse List L1.
2. Reverse List L2.
3. Add the nodes of both the lists iteratively.
4. Reverse the resultant list and return its head.

Given only a pointer to a node to be deleted in a singly linked list, how do you delete it?

The fast solution is to copy the data from the next node to the node to be deleted and delete the next node

Given a linked list which is sorted, how will you insert in sorted way
1) If Linked list is empty then make the node as
   head and return it.
2) If the value of the node to be inserted is smaller 
   than the value of the head node, then insert the node 
at the start and make it head.
3) In a loop, find the appropriate node after 
   which the input node (let 9) is to be inserted. 
   To find the appropriate node start from the head, 
   keep moving until you reach a node GN (10 in
   the below diagram) who's value is greater than 
   the input node. The node just before GN is the
appropriate node (7).
4) Insert the node (9) after the appropriate node
   (7) found in step 3.

*/
/* Insert a node after the n-th node from the end */

/*

Method 2 (Single traversal):

1. This method uses two pointers, one is slow_ptr and the other is fast_ptr. 
2. First move the fast_ptr up to the nth node from the beginning. 
3. Make the slow_ptr point to the 1st node of the list. 
4. Now, simultaneously move both the pointers until fast_ptr points to the last node. 
5. At this point the slow_ptr will be pointing to the nth node from the end. 
6. Insert the new node after this node. This method requires single traversal of the list

*/

// function to insert a node after the
// nth node from the end
void insertAfterNthNode(Node* head, int n, int x)
{
    // if list is empty
    if (head == NULL)
        return;

    // get a new node for the value 'x'
    Node* newNode = getNode(x);

    // Initializing the slow and fast pointers
    Node* slow_ptr = head;
    Node* fast_ptr = head;

    // move 'fast_ptr' to point to the nth node
    // from the beginning
    for (int i = 1; i <= n - 1; i++)
        fast_ptr = fast_ptr->next;

    // iterate until 'fast_ptr' points to the
    // last node
    while (fast_ptr->next != NULL) {

        // move both the pointers to the
        // respective next nodes
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next;
    }

    // insert the 'newNode' by making the
    // necessary adjustment in the links
    newNode->next = slow_ptr->next;
    slow_ptr->next = newNode;
}
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
/* Merge two sorted linklist */

node *merge(node *p , node *q , node *sorting)
{
	node *head3;
	
	if(p == NULL)
		return q;
	if(q == NULL)
		return p;
	
	if(p && q)
	{
		if(p->data <= q->data)
		{
			sorting = p;
			p = sorting->next;
		}
		else
		{
			sorting = q;
			q = sorting->next;
		}
		
	}
	
	head3 = sorting;
	
	while(p && q)
	{
		if(p->data <= q->data)
		{
			sorting->next = p;
			sorting = p;
			p = sorting->next;
		}
		else
		{
			sorting->next = q;
			sorting = q;
			q = sorting->next;
		}
	}
	
	if(p==NULL)
	{
		sorting->next = q;
	}
	
	if(q==NULL)
	{
		sorting->next = p;
	}
	
	return head3;	
}
/* Merge two sorted linked lists such that merged list is in reverse order */

/*
Input:  a: 5->10->15->40
        b: 2->3->20 
Output: res: 40->20->15->10->5->3->2

Input:  a: NULL
        b: 2->3->20 
Output: res: 20->3->2
*/

/*

A Simple Solution is to do following.
1) Reverse first list ‘a’.
2) Reverse second list ‘b’.
3) Merge two reversed lists

Another Simple Solution is first Merge both lists, then reverse the merged list.
Both of the above solutions require two traversals of linked list

How to solve without reverse, O(1) auxiliary space (in-place) and only one traversal of both lists? 

The idea is to follow merge style process. Initialize result list as empty. Traverse both lists from beginning to end. Compare current nodes of both lists and insert smaller of two at the beginning of the result list

1) Initialize result list as empty: res = NULL.
2) Let 'a' and 'b' be heads first and second lists respectively.
3) While (a != NULL and b != NULL)
    a) Find the smaller of two (Current 'a' and 'b')
    b) Insert the smaller value node at the front of result.
    c) Move ahead in the list of smaller node.
4) If 'b' becomes NULL before 'a', insert all nodes of 'a'
   into result list at the beginning.
5) If 'a' becomes NULL before 'b', insert all nodes of 'a'
   into result list at the beginning.

*/

// Given two non-empty linked lists 'a' and 'b'
Node* SortedMerge(Node *a, Node *b)
{
    // If both lists are empty
    if (a==NULL && b==NULL) return NULL;

    // Initialize head of resultant list
    Node *res = NULL;

    // Traverse both lists while both of then
    // have nodes.
    while (a != NULL && b != NULL)
    {
        // If a's current value is smaller or equal to
        // b's current value.
        if (a->key <= b->key)
        {
            // Store next of current Node in first list
            Node *temp = a->next;

            // Add 'a' at the front of resultant list
            a->next = res;
            res = a;

            // Move ahead in first list
            a = temp;
        }

        // If a's value is greater. Below steps are similar
        // to above (Only 'a' is replaced with 'b')
        else
        {
            Node *temp = b->next;
            b->next = res;
            res = b;
            b = temp;
        }
    }

    // If second list reached end, but first list has
    // nodes. Add remaining nodes of first list at the
    // front of result list
    while (a != NULL)
    {
        Node *temp = a->next;
        a->next = res;
        res = a;
        a = temp;
    }

    // If first list reached end, but second list has
    // node. Add remaining nodes of first list at the
    // front of result list
    while (b != NULL)
    {
        Node *temp = b->next;
        b->next = res;
        res = b;
        b = temp;
    }

    return res;
}
/* Merge two unsorted linked lists to get a sorted list */

/*
Input: List 1 = 3 -> 1 -> 5, List 2 = 6-> 2 -> 4
Output: 1 -> 2 -> 3 -> 4 -> 5 -> 6

Input: List 1 = 4 -> 7 -> 5, List 2 = 2-> 1 -> 8 -> 1
Output: 1 -> 1 -> 2 -> 4 -> 5 -> 7 -> 8


Naive Approach: The naive approach is to sort the given linked lists and then merge the two sorted linked lists together 
into one list in increasing order.

To solve the problem mentioned above the naive method is to sort the two linked lists individually and merge the two linked lists together into one list which is in increasing order.

Efficient Approach: To optimize the above method we will concatenate the two linked lists and then sort it using any sorting algorithm. Below are the steps: 

Concatenate the two lists by traversing the first list until we reach it’s a tail node and then point the next of the tail node to the head node of the second list. Store this concatenated list in the first list.
Sort the above-merged linked list. Here, we will use a bubble sort. So, if node->next->data is less then node->data, then swap the data of the two adjacent nodes.

*/


/* Pairwise swap elements of a given linked list */

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

/*
METHOD 1 (Using two loops) 

This is the simple way where two loops are used. 
Outer loop is used to pick the elements one by one and the inner loop compares the picked element with the rest of the elements. 

*/

/* Function to remove duplicates from a
   unsorted linked list */
void removeDuplicates(struct Node* start)
{
    struct Node *ptr1, *ptr2, *dup;
    ptr1 = start;

    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;

        /* Compare the picked element with rest
           of the elements */
        while (ptr2->next != NULL) {
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data) {
                /* sequence of steps is important here */
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup);
            }
            else /* This is tricky */
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
/* Function to reverse the linked list using 2 pointers */
void reverse(struct Node** head_ref)
{
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
 
    // at last prev points to new head
    while (current != NULL) {
        // This expression evaluates from left to right
        // current->next = prev, changes the link from
        // next to prev node
        // prev = current, moves prev to current node for
        // next reversal of node
        // This example of list will clear it more 1->2->3->4
        // initially prev = 1, current = 2
        // Final expression will be current = 1^2^3^2^1,
        // as we know that bitwise XOR of two same
        // numbers will always be 0 i.e; 1^1 = 2^2 = 0
        // After the evaluation of expression current = 3 that
        // means it has been moved by one node from its
        // previous position
        current = (struct Node*)((ut)prev ^ (ut)current ^ (ut)(current->next) ^ (ut)(current->next = prev) ^ (ut)(prev = current));
    }
 
    *head_ref = prev;
}
// C Program to sort a linked list 0s, 1s or 2s
#include<stdio.h>
#include<stdlib.h>
 
/* Link list node */
struct Node
{
    int data;
    struct Node* next;
};
 
// Function to sort a linked list of 0s, 1s and 2s
void sortList(struct Node *head)
{
    int count[3] = {0, 0, 0};  // Initialize count of '0', '1' and '2' as 0
    struct Node *ptr = head;
 
    /* count total number of '0', '1' and '2'
     * count[0] will store total number of '0's
     * count[1] will store total number of '1's
     * count[2] will store total number of '2's  */
    while (ptr != NULL)
    {
        count[ptr->data] += 1;
        ptr = ptr->next;
    }
 
    int i = 0;
    ptr = head;
 
    /* Let say count[0] = n1, count[1] = n2 and count[2] = n3
     * now start traversing list from head node,
     * 1) fill the list with 0, till n1 > 0
     * 2) fill the list with 1, till n2 > 0
     * 3) fill the list with 2, till n3 > 0  */
    while (ptr != NULL)
    {
        if (count[i] == 0)
            ++i;
        else
        {
            ptr->data = i;
            --count[i];
            ptr = ptr->next;
        }
    }
}
/* Swap the nodes without swapping data 
 *
 * Swap Kth node from beginning with Kth node from end in a Linked List
 *
 * 3 cases :
 *
 * 1. Either one of the node is head
 * 2. Either one of the node is last node
 * 3. Internal nodes
*/





