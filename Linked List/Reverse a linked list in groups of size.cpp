struct node *reverse (struct node *head, int k)
{ 
    // Complete this method
    struct node* current = head;  
    struct node* nextp = NULL;  
    struct node* prev = NULL;  
    int count = 0;  
      
    //reverse first k nodes of the linked list 
    while (current != NULL && count < k)  
    {  
        nextp = current->next;  
        current->next = prev;  
        prev = current;  
        current = nextp;  
        count++;  
    }  
      
    if (nextp != NULL)  
    head->next = reverse(nextp, k);  
    return prev;  
}
