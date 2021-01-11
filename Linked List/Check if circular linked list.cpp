bool isCircular(Node *head)
{
   // Your code here
   if(head == NULL) return false;
   if(head->next == head) return true;
   Node* temp = head;
   temp = temp->next;
   while(temp != NULL){
       if(temp->next == head){
           return true;
       }
       temp = temp->next;
       
   }
   return false;
}
