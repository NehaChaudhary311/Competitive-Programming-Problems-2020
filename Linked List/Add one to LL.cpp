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
Node *reverseList(Node *head) 
{ 
    Node * prev = NULL; 
    Node * current = head; 
    Node * next; 
    while (current != NULL) 
    { 
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    } 
    return prev; 
} 
Node* addOneFunc(Node* head){
    Node* res = head; 
    Node *temp, *prev = NULL; 
    int carry = 1, sum; 
 
    while (head != NULL)
    { 
        sum = carry + head->data; 
        carry = (sum >= 10)? 1 : 0; 
        sum = sum % 10; 
        head->data = sum;
        temp = head; //keeping it for cases like 9->9->9->9
        head = head->next; 
    } 
    //for cases like 9->9->9->9, output should be like this 1->0->0->0->0
    if (carry > 0) 
        temp->next = new Node(carry); 

    return res; 
}
Node* addOne(Node *head) 
{
    // Your Code here
    // return head of list after adding one
    head = reverseList(head);
    head = addOneFunc(head);
    head = reverseList(head);
    return head;
}
