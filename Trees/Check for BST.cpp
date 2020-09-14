// return true if the given tree is a BST, else return false
bool checkBST(Node* root,int mn,int mx){
    if(root == NULL) return true;
    if(root->data <= mn || root->data >= mx)return false;
    return checkBST(root->left,mn,root->data) && checkBST(root->right,root->data,mx);
}
bool isBST(Node* root) {
    return checkBST(root,INT_MIN,INT_MAX);
}
