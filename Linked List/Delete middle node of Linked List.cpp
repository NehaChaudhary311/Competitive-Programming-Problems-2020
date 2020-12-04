/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    // Your Code Here
    if(head == NULL || head->next == NULL) return NULL;
    Node* sptr = head;
    Node* fptr = head;
    Node* prev = NULL;
    while(fptr != NULL && fptr->next != NULL){
        fptr = fptr->next->next;
        prev = sptr;
        sptr = sptr->next;
    }
    prev->next = sptr->next;
    return head;
    
}
