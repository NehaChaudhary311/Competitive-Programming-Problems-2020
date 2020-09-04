/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <stack>
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* c=head;
        while(c!=NULL){
            s.push(c->val);//insert all the values first 
            c=c->next;
        }
        while(head!=NULL){
            if(s.top()==head->val)//compare them aganist the list 
                s.pop();
            else
                return false;//if one of them are not same then return false
            head=head->next;
        }
        return true;//if we made it till here then return true
    }
};
