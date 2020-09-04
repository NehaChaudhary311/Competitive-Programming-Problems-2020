/*
Example 1:
Input: [2,1,5]
Output: [5,5,0]

Example 2:
Input: [2,7,4,3,5]
Output: [7,0,5,5,0]

*/
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
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> result;
        ListNode* temp = head;
        while(temp){
            int currentValue = temp->val;
            ListNode* temp1 = temp->next;
            while(temp1 && temp1->val <= currentValue){
                temp1 = temp1->next;
            }
            int data = temp1 ? temp1->val : 0;
            result.push_back(data);
            temp = temp->next;
        }
        return result;
    }
};
