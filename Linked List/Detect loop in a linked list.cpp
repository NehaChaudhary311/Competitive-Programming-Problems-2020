int detectloop(Node *head) {

    // your code here
    Node* fptr = head->next;
    Node* sptr = head;
    while(sptr != fptr){
        if(fptr == NULL || fptr->next == NULL) return 0;
        fptr = fptr->next->next;
        sptr = sptr->next;
    }
    return 1;
}
