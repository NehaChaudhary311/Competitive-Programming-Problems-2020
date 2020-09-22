vector<int> inOrder(Node* root)
{
  // Your code here
    stack<Node*> s; 
    vector<int> ans;
    if(root == nullptr) return ans; 
    s.push(root);
    while(!s.empty())
    {
        Node* x = s.top();
        s.pop();
        if(x != nullptr && (x -> right != nullptr || x -> left != nullptr))
        {        
            s.push(x -> right);
            s.push(x); 
            s.push(x -> left);
        }
        else
        { //leaf node 
            if(x != nullptr)
                ans.push_back(x -> data);
    
            if(s.empty()) break;
    
            if(s.top() != nullptr)
                ans.push_back(s.top() -> data);
            s.pop();
        }
    }
    return ans;
      
 
}
