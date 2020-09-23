vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> ans;
  if(root == NULL) return ans;
  stack<Node*> stk;
  stk.push(root);
  
  while(!stk.empty()){
      Node* node = stk.top();
      ans.push_back(node->data);
      stk.pop();
      if(node->right != NULL)
        stk.push(node->right);
      if(node->left != NULL)
        stk.push(node->left);
  }
  return ans;
}
