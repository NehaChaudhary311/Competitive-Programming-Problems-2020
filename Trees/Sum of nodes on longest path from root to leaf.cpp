/*
Given a binary tree of size N. Your task is to complete the function sumOfLongRootToLeafPath(), that find the sum of all nodes on the longest path from root to leaf node.
If two or more paths compete for the longest path, then the path having maximum sum of nodes is being considered.

Input : Binary tree:
        4        
       / \       
      2   5      
     / \ / \     
    7  1 2  3    
      /
     6
Output : 13

*/
void find(Node* root, int sum, int len, int &ms, int &ml){
    if(root == NULL) return;
    //if we have reached a leaf node check
    //for maxSum and maxLen, if update is required then do it
    if(root->left == NULL && root->right == NULL && ms <= sum+root->data && ml <= len){
        ms = root->data + sum;
        ml = len;
        return;
    }
    find(root->left, sum + root->data, len + 1, ms, ml);
    find(root->right, sum + root->data, len + 1, ms, ml);
}
int sumOfLongRootToLeafPath(Node* root)
{
	// Code here
	if(root == NULL) return 0;
	int maxSum = 0, maxLen = 0;
	find(root, 0, 0, maxSum, maxLen);
	return maxSum;
}
