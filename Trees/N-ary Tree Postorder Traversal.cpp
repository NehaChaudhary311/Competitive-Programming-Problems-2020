/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> v;
        if(!root)return v;
        stack<Node*> st;
        st.push(root);
        while(!st.empty())
        {
            Node* nd = st.top();
            st.pop();
            v.push_back(nd->val);
            for(Node* ch:nd->children)
            {
                st.push(ch);
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
