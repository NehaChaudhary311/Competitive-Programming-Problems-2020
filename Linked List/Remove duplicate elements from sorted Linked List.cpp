/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// root: head node
Node *removeDuplicates(Node *root)
{
 // your code goes here
    Node* curr = root;
    while(curr->next != NULL){
        if(curr->data == curr->next->data){
            curr->next = curr->next->next;
        }
        else{
            curr = curr->next;
        }
    }
    return root;
}
