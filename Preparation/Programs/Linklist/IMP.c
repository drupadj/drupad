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
