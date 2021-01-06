//Time: O(N)
//Space: O(N) - queue
vector<int> levelOrder(Node* node)
{
  //Your code here
  vector<int> res;
  if(node == NULL) return res;
  queue<Node*> q;
  q.push(node);
  
  while(!q.empty()){
      Node* temp = q.front();
      res.push_back(temp->data);
      q.pop();
      if(temp->left != NULL) q.push(temp->left);
      if(temp->right != NULL) q.push(temp->right);
  }
  return res;
}
