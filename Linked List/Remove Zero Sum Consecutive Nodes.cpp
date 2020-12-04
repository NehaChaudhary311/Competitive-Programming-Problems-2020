/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 
/*
APPROCACH 1 : Use a vector annd push_back all the Linked List Elements in it
Check for each vector[i] (i = 0 to i = vector.size()) with each vector[j] (j = i to vector.size()) and calculate sum
If at any point sum == 0, erase the elements from vector from that ith position to the jth position
This way we would be left with an array having only required numbers
Now, create a Linked List using this array
*/

class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* curr = head;
        vector<int> A;

        while(curr != NULL){
            A.push_back(curr->val);
            curr = curr->next;
        }

        int j, sum = 0;
        for (int i = 0 ; i<A.size() ; i++){
            sum = 0;
            for(j = i ; j<A.size() ; j++){
                sum += A[j];
                if(sum == 0)
                    break;
            }            
            if(sum == 0) {
                A.erase(A.begin()+i, A.begin()+j+1);
                i--;
            }
        }

        if(A.size() == 0)
            return NULL;
        else
        {
            ListNode* root = new ListNode(A[0]);
            ListNode* new_head = root;
            for (int i = 1 ; i<A.size() ; i++)
            {
                ListNode* temp = new ListNode;
                temp->val = A[i];
                root->next = temp;
                root = root->next;
            }

            return new_head;
        }
    }
};
