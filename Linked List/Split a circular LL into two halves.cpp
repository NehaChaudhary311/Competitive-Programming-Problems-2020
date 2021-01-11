/*
Given a Cirular Linked List of size N, split it into two halves circular lists. 
If there are odd number of nodes in the given circular linked list then out of the resulting two halved lists, first list should have one node more than the second list. 
The resultant lists should also be circular lists and not linear lists.

Example 1:
Input:
Circular LinkedList: 1->5->7
Output:
1 5
7
 

Example 2:
Input:
Circular LinkedList: 2->6->1->5
Output:
2 6
1 5
*/
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    *head1_ref = head;
    if(head == NULL || head->next == NULL) return;
    Node* sptr = head, *fptr = head;
    while(fptr->next != head && fptr->next->next != head){
        sptr = sptr->next;
        fptr = fptr->next->next;
    }
  
    //if even number, then make the fptr to point to last node
    if(fptr->next->next == head){
        fptr = fptr->next;
    }
    if(head->next != head)  
        *head2_ref = sptr->next;  
    //make second list circular
    fptr->next = sptr->next;
    //make first list circular
    sptr->next = head;
    
}
