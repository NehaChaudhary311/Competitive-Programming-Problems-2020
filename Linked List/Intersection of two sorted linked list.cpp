/*
Given two lists sorted in increasing order, create a new list representing the intersection of the two lists. The new list should be made with its own memory — the original lists should not be changed.

Example 1:
Input:
L1 = 1->2->3->4->6
L2 = 2->4->6->8
Output: 2 4 6
Explanation: For the given first two
linked list, 2, 4 and 6 are the elements
in the intersection.

Example 2:
Input:
L1 = 10->20->40->50
L2 = 15->40
Output: 40

*/
Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* res = new Node(0);
    Node* p = res;
    while(head1 != NULL && head2 != NULL){
        if(head1->data == head2->data){
            p->next = new Node(head1->data);
            p = p->next;
            head1 = head1 ? head1->next : head1;
            head2 = head2 ? head2->next : head2;
        }
        else if(head1->data < head2->data)
            head1 = head1 ? head1->next : head1;
        else
            head2 = head2 ? head2->next : head2;
            
    }
    return res->next;
}
