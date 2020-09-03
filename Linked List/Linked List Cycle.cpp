/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
            return false;
        ListNode *fptr = head->next;
        ListNode *sptr = head;
        while(sptr != fptr){
            if(fptr == NULL || fptr->next == NULL)
                return false;
            fptr = fptr->next->next;
            sptr = sptr->next;
        }
        return true;
    }
};
