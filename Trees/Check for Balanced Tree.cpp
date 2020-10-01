/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
int height(Node* root)
{
    if(!root)
        return 0;
    else
        return 1+max(height(root->left),height(root->right));
}

bool isBalUtil(Node *t)
{
    if(!t)
        return true;
    if(!t->left && !t->right)
        return true;
    if(abs(height(t->left)-height(t->right)) <= 1 && isBalUtil(t->left) && isBalUtil(t->right))
        return true;
    else return false;    
}
//Given Function
bool isBalanced(Node *root)
{
    if(isBalUtil(root))
        return true;
    else return false ;   
        
}
