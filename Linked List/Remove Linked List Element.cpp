/*
Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5

Input : 1->1, val = 1
Output : NULL

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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head == NULL)
            return head;
        
        ListNode* temp = head;
        while(temp!=NULL && temp->next!=NULL )
        {
            //skipping to check the frst value.. will do in the end
            if(temp->next->val==val)
            {
                temp->next=temp->next->next;
            }
            else
            {
                temp=temp->next;
            }
        }
        //Now checking if the first node has the value val.. for eg., [1,1] and val = 1
        if(head->val == val)
            return head->next;
        return head;
    }
};
