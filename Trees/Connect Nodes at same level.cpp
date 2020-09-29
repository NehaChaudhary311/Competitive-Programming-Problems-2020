/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */

// Should set the nextRight for all nodes
void connect(Node *p)
{
   // Your Code Here
   if (p==NULL) return;

    queue<Node*>q;
    q.push(p);
    
    while(!q.empty())
    {
        int size = q.size();
        Node* prev = NULL;
        
        while(size--)
        {
            Node* temp = q.front();
            q.pop();
            
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            
            if(prev != NULL)
                prev->nextRight = temp;
            
            prev = temp;
        }
        
        prev->nextRight = NULL;
    
   }
}

