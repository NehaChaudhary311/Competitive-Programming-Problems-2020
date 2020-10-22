/* Total Length approach*/
int getNthFromLast(Node *head, int n)
{
       // Your code here
       int len = 0;
       Node* temp = head;
       while(temp != NULL){
           temp = temp->next;
           len++;
       }
       if(n > len) return -1;
       for(int i = 1; i<len - n +1; i++){
           head = head->next;
       }
       return head->data;
}

/*Two pointers approach*/
int getNthFromLast(Node *head, int n)
{
       // Your code here
       //Using two pointers - mainp & refp
       if(head == NULL) return -1;
        Node* mainp = head;
        Node* refp = head;
        int count = 0;
        
        //Move the refp to n nodes from head
        while(count != n){
            if(refp == NULL) return -1;
            refp = refp->next;
            count++;
        }
        
        //if refp becomes null or reaches the end of LL, that means nth last node is first node
        if(refp == NULL) return mainp->data;
        //else move mainp and refp at same pace till refp becomes nULL
        while(refp != NULL){
            mainp = mainp->next;
            refp = refp->next;
        }
        return mainp->data;
}


