

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
void topView(Node* node) {
    if (node == NULL) return;
    queue<pair<Node*, int>> q;
    map<int, int> m;
    int hd = 0;
    q.push({ node, hd });
    while (!q.empty()) {
        pair<Node*, int> temp;
        q.pop();
        Node* node = temp.first;
        int hd = temp.second;
        if (node != nullptr) {
            m[hd] = node->data;
        }
      
        if (node->left != nullptr) {
            q.push({ node->left, hd - 1 });
        }
        if (node->right != nullptr) {
            q.push({ node->right, hd + 1 });

        }
        for (map<int,int>::iterator it = m.begin(); it != m.end(); it++) {
            cout << it->second << " ";
        }
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

    cout << "Top View : ";
    topView(root);

    return 0;
}

