/*
Given the head of a linked list, return the list after sorting it in ascending order.

Follow up: Can you sort the linked list in O(n logn) time and O(1) memory (i.e. constant space)?

 */
 
//SPlit the LL into two halves
class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b){
        ListNode* sortedList = new ListNode(0);
        ListNode* p = sortedList;
        while(a != NULL && b != NULL){
            if(a->val < b->val){
                p->next = a;
                a = a->next;
            }
            else{
                p->next = b;
                b = b->next;
            }
            p = p->next;
        }
        if(a != NULL){
            p->next = a;
            a = a->next;
        }
        if(b != NULL){
            p->next = b;
            b = b->next;
        }
        return sortedList->next;
    
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp = NULL, *sptr = head, *fptr = head;
        while(fptr != NULL && fptr->next != NULL){
            temp = sptr;
            sptr = sptr->next;
            fptr = fptr->next->next;
        }
        temp->next = NULL;
        ListNode* leftSide = head;
        ListNode* rightSide = sptr;
        return merge(sortList(leftSide), sortList(rightSide));
    }
};
