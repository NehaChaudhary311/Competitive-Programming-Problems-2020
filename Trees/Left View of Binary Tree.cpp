void leftView(Node *root)
{
   // Your code here
   if(root==NULL)
       return;
    queue<Node*>Q;
    Q.push(root);
    Q.push(NULL);
    while(Q.front()!=NULL){
        Node *x=Q.front();
        Q.pop();
        cout<<(x->data)<<" ";
        while(x!=NULL){
            if(x->left)
                Q.push(x->left);
            if(x->right)
                Q.push(x->right);
            x=Q.front();
            Q.pop();
        }
        Q.push(NULL);
    }
}
