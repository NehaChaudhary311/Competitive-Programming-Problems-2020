void inorder(Node* root, int &count){
    
    if(root == NULL) return;
    inorder(root->left, count);
    if(root->left == NULL && root->right == NULL) count++;
    inorder(root->right, count);
        
    }
int countLeaves(Node* root)
{
  // Your code here
  int count = 0;
  inorder(root, count);
     
    return count;
  
}

//ANOTHER SOLUTION
//Find leaf count of left subtree and leaf count of right subtree and return the sum of it
int getLeafCount(struct node* node)  
{  
    if(node == NULL)      
        return 0;  
    if(node->left == NULL && node->right == NULL)  
        return 1;          
    else
        return getLeafCount(node->left)+  
            getLeafCount(node->right);  
}  
  
