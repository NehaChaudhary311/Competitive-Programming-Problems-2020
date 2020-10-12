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


