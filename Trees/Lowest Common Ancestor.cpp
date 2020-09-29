/*The structure of a BST Node is as follows:

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// Returns the LCA of the nodes with values n1 and n2
// in the BST rooted at 'root' 
Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if (root == NULL) return NULL;
   if(n1 == root->data || n2 == root->data) return root;
    
   
    // If both n1 and n2 are smaller than root, then LCA lies on the left 
    if (n1 < root->data && n2 < root->data) 
        return LCA(root->left, n1, n2); 

    // If both n1 and n2 are greater than root, then LCA lies on the right 
    if (n1 > root->data && n2 > root->data)  
        return LCA(root->right, n1, n2); 

    return root;
}
