/*

Input:
        5
       / \
      3   6
     / \
    2   4
Output:
Inorder of original tree: 2 3 4 5 6 
Inorder of mirror tree: 6 5 4 3 2
Mirror tree will be:
  5
 / \
6   3
   / \
  4   2
  

*/
void mirror(Node* node)
{
    if(node == NULL) return;
    
    struct Node* temp;        
        
    //check subtree is leaf node or not
    mirror(node->left);
    mirror(node->right);

    //swap the pointers in this node
    temp = node->left;
    node->left = node-> right;
    node->right = temp;
    }
}
