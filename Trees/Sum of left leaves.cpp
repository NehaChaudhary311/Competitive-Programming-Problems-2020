/*
Find the sum of all left leaves in a given binary tree.

Example:

    3
   / \
  9  20
    /  \
   15   7

There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.
https://leetcode.com/problems/sum-of-left-leaves/

ERROR: Getting Runtime error in 35th line in this file
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumLeftView(TreeNode* root, int level, int maxL){
        int sum = 0;
        if(maxL <level){
            maxL = level;
            if(root->right == NULL && root->left == NULL)
                sum += root->val;
        }
        sumLeftView(root->left, level+1, maxL);
        sumLeftView(root->right, level+1, maxL);
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return -1;
        return sumLeftView(root, 0, -1);
        
    }
};
