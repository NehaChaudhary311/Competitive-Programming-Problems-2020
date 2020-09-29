struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

vector<int> findSpiral(Node* root)
{

    vector<int> res;
    if (root == NULL) 
        return res; 
  
    stack<int> s;  
    queue<Node*> q; 
  
    bool reverse = true; 
    q.push(root); 
    while (!q.empty()) { 
  
        int size = q.size(); 
        while (size) { 
            Node* p = q.front(); 
            q.pop(); 

            if (reverse) 
                s.push(p->data); 
            else
                res.push_back(p->data);
  
            if (p->left) 
                q.push(p->left); 
            if (p->right) 
                q.push(p->right); 
            size--; 
        } 
        if (reverse) { 
            while (!s.empty()) { 
                res.push_back(s.top()); 
                s.pop(); 
            } 
        } 
        reverse = !reverse; 
    } 
    return res;
    
}
