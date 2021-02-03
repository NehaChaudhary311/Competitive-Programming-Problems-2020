//APPROACH 1: Using heights
int height(Node* root){
    if(root == NULL) return 0;
    return 1 + max(height(root->left), height(root->right));
}
bool check(Node *root)
{
    //Your code here
    if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL) return true;
    if(root->left == NULL || root->right == NULL) return false;
    int l = height(root->left);
    int r = height(root->right);
    if(l == r) return true;
    return false;
    
}
