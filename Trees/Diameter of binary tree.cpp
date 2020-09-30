int height(Node* node){
    if(node == NULL) return 0;
    int lh = height(node->left);
    int rh = height(node->right);
    return(max(lh, rh) +1);
}
int diameter(Node* node)
{
   if (node == NULL) 
     return 0; 
  
  int lheight = height(node->left); 
  int rheight = height(node->right); 
  
  int ldiameter = diameter(node->left); 
  int rdiameter = diameter(node->right); 
  
  return max(lheight + rheight +1, max(ldiameter, rdiameter));
}
