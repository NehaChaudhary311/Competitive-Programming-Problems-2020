/*
Given a Binary Tree, print the diagonal traversal of the binary tree.
Input :
            8
         /     \
        3      10
      /   \      \
     1     6     14
         /   \   /
        4     7 13
Output : 8 10 14 3 6 7 13 1 4

*/

//APPROACH: Using queue
//Time: O(n)
//Space: O(n)
vector<int> diagonal(Node *root)
{
   // your code here
   vector<int> ans;
   queue<Node*> q;
   if(root == NULL) return ans;
   Node* temp = root;
   q.push(root);
   while(!q.empty()){
       Node* temp = q.front();
       q.pop();
       while(temp != NULL){
           ans.push_back(temp->data);
           if(temp->left) q.push(temp->left);
           temp = temp->right;
       }
   }
   return ans;
}
