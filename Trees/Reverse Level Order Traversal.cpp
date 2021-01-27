Given a binary tree of size N, find its reverse level order traversal. ie- the traversal must begin from the last level.

Example 1:

Input :
        1
      /   \
     3     2

Output: 3 2 1
Explanation:
Traversing level 1 : 3 2
Traversing level 0 : 1
Example 2:

Input :
       10
      /  \
     20   30
    / \ 
   40  60

Output: 40 60 20 30 10
Explanation:
Traversing level 2 : 40 60
Traversing level 1 : 20 30
Traversing level 0 : 10
*/

//APPROACH: Using stack for reversal and queue for level order

vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> res;
    if(root == NULL) return res;
    stack<Node*> s;
    queue<Node*> q;
    Node* temp = root;
    q.push(temp);
    
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        s.push(curr);
        if(curr->right) q.push(curr->right);
        if(curr->left) q.push(curr->left);
    }
    while(!s.empty()){
        int x = s.top()->data;
        s.pop();
        res.push_back(x);
    }
    return res;
}
