/*
Given a Binary Tree, find its Boundary Traversal. The traversal should be in the following order: 

Left boundary nodes: defined as the path from the root to the left-most node ie- the leaf node you could reach when you always travel preferring the left subtree over the right subtree. 
Leaf nodes: All the leaf nodes except for the ones that are part of left or right boundary.
Reverse right boundary nodes: defined as the path from the right-most node to the root. The right-most node is the leaf node you could reach when you always travel preferring the right subtree over the left subtree. Exclude the root from this as it was already included in the traversal of left boundary nodes.

Input:
          20
        /   \
       8     22
     /   \    \
    4    12    25
        /  \ 
       10   14 

Output: 20 8 4 10 14 25 22
*/

void LeftViewModified(Node* root, vector<int> &ans){
    if(root == NULL) return;
    if(root->left){
        ans.push_back(root->data);
        LeftViewModified(root->left, ans);
    }
    /*
        8                         8
       /                         /
      4                         4
       \                       / \
        10                    1   10
        /
       5
    For the above case(left side), 10 counts in LeftView so we need to check the right also
    But (right side) when I'm on 4, I only need to check for the root->left, that is
    why we are using else if(root->right) and not if(root->right)
    */
    else if(root->right){
        ans.push_back(root->data);
        LeftViewModified(root->right, ans);
    }
}
void LeafNodes(Node* root, vector<int> &ans){
    if(root == NULL) return;
    //I need the leaf nodes from left to right side,
    //so I'll traverse to the root->left first
    LeafNodes(root->left, ans);
    if(root->left == NULL && root->right == NULL) ans.push_back(root->data);
    /*
       20
      /
     8
    / \
   4   10
      After reaching 4, we need to add 10 also as leaf node
      To achieve this, return to 8 and then call for LeafNodes(root->right) and check
    */
    LeafNodes(root->right, ans);
    
}
/*
Right View should be from bottom to top, so unlike LeftViewModified, we'll
first call RightViewModified until we reach the end, and then we'll add root->data to ans
*/
void RightViewModified(Node* root, vector<int> &ans){
    if(root == NULL) return;
    if(root->right){
        RightViewModified(root->right, ans);
        ans.push_back(root->data);
    }
    else if(root->left){
        RightViewModified(root->left, ans);
        ans.push_back(root->data);
    }
}
vector <int> printBoundary(Node *root)
{
     //Your code here
     vector<int> ans;
     ans.push_back(root->data);
     LeftViewModified(root->left, ans);
     LeafNodes(root, ans);
     RightViewModified(root->right, ans);
     return ans;
}
