Node* segregate(Node *head) {
    
    // Add code here
    if (head == NULL || head->next == NULL) 
        return head; 
        
    //creating dummy nodes
    Node* zeroD = new Node(0); 
    Node* oneD = new Node(0); 
    Node* twoD = new Node(0);
    
    Node* zero = zeroD, *one = oneD, *two = twoD; 

    Node* curr = head; 
    while (curr) { 
        if (curr->data == 0) { 
            zero->next = curr; 
            zero = zero->next; 
            curr = curr->next; 
        } else if (curr->data == 1) { 
            one->next = curr; 
            one = one->next; 
            curr = curr->next; 
        } else { 
            two->next = curr; 
            two = two->next; 
            curr = curr->next; 
        } 
    } 
  
    // Attaching the separate lists 
    zero->next = (oneD->next)  ? (oneD->next) : (twoD->next); 
    one->next = twoD->next; 
    two->next = NULL; 
  
    // Update the head
    head = zeroD->next; 
  
    // Delete dummy nodes 
    delete zeroD; 
    delete oneD; 
    delete twoD; 
  
    return head; 
  
}
