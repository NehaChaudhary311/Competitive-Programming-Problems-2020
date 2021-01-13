/*
Given K sorted linked lists of different sizes. The task is to merge them in such a way that after merging they will be a single sorted linked list.

Example 1:

Input:
K = 4
value = {{1,2,3},{4 5},{5 6},{7,8}}
Output: 1 2 3 4 5 5 6 7 8
Explanation:
The test case has 4 sorted linked 
list of size 3, 2, 2, 2
1st    list     1 -> 2-> 3
2nd   list      4->5
3rd    list      5->6
4th    list      7->8
The merged list will be
1->2->3->4->5->5->6->7->8.
*/

struct compare {
    bool operator()(
        struct Node* a, struct Node* b)
    {
        return a->data > b->data;
    }
};

/* arr[] is an array of pointers to heads of linked lists
  and N is size of arr[]  */
Node * mergeKLists(Node *arr[], int k)
{
       // Your code here
       priority_queue<Node*, vector<Node*>, compare> pq;
 
    // push the head nodes of all
    // the k lists in 'pq'
    for (int i = 0; i < k; i++)
        if (arr[i] != NULL)
            pq.push(arr[i]);
     
      // Handles the case when k = 0 
      // or lists have no elements in them    
      if (pq.empty())
        return NULL;
   
      struct Node *dummy = new Node(0);
      struct Node *last = dummy;
   
    while (!pq.empty()) {
 
        // get the top element of 'pq'
        struct Node* curr = pq.top();
        pq.pop();
 
          // add the top element of 'pq'
          // to the resultant merged list
        last->next = curr;
        last = last->next;  
      
        //check for other nodes at the same index
        if (curr->next != NULL;
            pq.push(curr->next);
    }
    return dummy->next;
}
