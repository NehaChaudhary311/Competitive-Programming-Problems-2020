/*

Example 1:
Input: root = [1,null,3,2,4,null,5,6]
Output: [1,3,5,6,2,4]

*/
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
    vector<int> preorder(Node* root) {
        vector<int> ans;
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            Node* x = st.top();
            st.pop();
            if(x==NULL)continue;
            ans.push_back(x->val);
            for(int i=x->children.size()-1;i>=0;i--)
                st.push(x->children[i]);
        }
        return ans;
    }
};
