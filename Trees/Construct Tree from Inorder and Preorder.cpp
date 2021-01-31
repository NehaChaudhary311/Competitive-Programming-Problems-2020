/*
Start from rootIdx 0
Find pre[rootIdx] from in[], let's call the index pivot
Create a new node with in[pivot]
Create its left child recursively
Create its right child recursively
Return the created node.
*/

//APPROACH - recursively
Node* build(int pre[], int in[], int &rootIdx, int left, int right) {
        if (left > right) return NULL;
        int pivot = left;  // find the root from inorder
        while(in[pivot] != pre[rootIdx]) pivot++;
        
        rootIdx++;
        Node* newNode = new Node(in[pivot]);
        newNode->left = build(pre, in, rootIdx, left, pivot-1);
        newNode->right = build(pre, in, rootIdx, pivot+1, right);
        return newNode;
    }
Node* buildTree(int in[],int pre[], int n)
{
//add code here.
    int rootIdx = 0;
    return build(pre, in, rootIdx, 0, n-1);
}
