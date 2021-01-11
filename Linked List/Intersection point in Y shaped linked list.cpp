/*
https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1#
*/
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    if(head1 == NULL || head2 == NULL) return -1;
    Node* p1 = head1;
    Node* p2 = head2;
    while(p1 != p2){
        p1 = p1->next;
        p2 = p2->next;
        if(p1 == p2) break;
        //putting the shorter linked list to the beginning of the longer linked list
        if(p1 == NULL) p1 = head2;
        if(p2 == NULL) p2 = head1;
        
    }
    return p1->data;
}
