int height(Node* root)
{
   // Your code here
   if(root==NULL)
   {
       return 0;
   }
   else
   {
       return 1+max(height(root->left),height(root->right));
   }
}
