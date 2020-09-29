

#include <iostream>
#include<queue>
#include<map>
using namespace std;
struct Node {
    // Data of the node 
    int data;

    // Horizontal Distance of the node 
    int hd;

    // Reference to left node 
    struct Node* left;

    // Reference to right node 
    struct Node* right;
};

// Initialising node 
struct Node* newNode(int data)
{
    struct Node* node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
void bottomView(Node* root) {
    queue<pair<Node*, int>> q;
    map<int, int> m;
    q.push(make_pair(root, 0));
    while (q.empty() == false) {
        Node* current_node = q.front().first;
        int node_val = current_node->data;
        int hd = q.front().second;
        m[hd] = node_val;//overwriting the hd value everytime 

        q.pop();
        if (current_node->left) {
            q.push(make_pair(current_node->left, hd-1));
        }
        if (current_node->right) {
            q.push(make_pair(current_node->right, hd+1 ));
        }
    }
    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << i->second << " ";
    }
}
int main(int argc, const char* argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";

    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->left->right->right = newNode(5);
    root->left->right->right->right = newNode(6);

    cout << "Bottom View : ";
    bottomView(root);

    return 0;
}

