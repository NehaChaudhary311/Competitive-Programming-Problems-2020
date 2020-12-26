int detectloop(Node *head) {

    // your code here
    if(head == NULL) return 0;
    Node* slow = head;
    Node* fast = head;
    while(true) {

        slow = slow->next;          

        if(fast->next != NULL)
            fast = fast->next->next; 
        else
            return 0;          // next node null => no loop

        if(slow == NULL || fast == NULL) // if either hits null..no loop
            return 0;

        if(slow == fast) // if the two ever meet...we must have a loop
            return 1;
    }
}
