//LCA of Binary Tree (Not Binary Search Tree) - Not tested
//Time Complexity - O(n)

Node* LCA(Node* root, Node* n1, Node* n2){
  if(root == NULL) return NULL;
  if(root == n1 || root == n2) return root;
  Node* left = LCA(root->left, n1, n2);
  Node* right = LCA(root->right, n1, n2);
  if(left != NULL && right != NULL) return root;
  if(left == NULL && right == NULL) return NULL;
  
  if(left != NULL) return left;
  else return right;
}
