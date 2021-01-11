/*
GFG Ques
Given two numbers represented by two linked lists of size N and M. The task is to return a sum list. The sum list is a linked list representation of the addition of two input numbers.

Example 1:
Input:
N = 2
valueN[] = {4,5}
M = 3
valueM[] = {3,4,5}
Output: 3 9 0  
Explanation: For the given two linked
list (4 5) and (3 4 5), after adding
the two linked list resultant linked
list will be (3 9 0).

Input:
N = 2
valueN[] = {6,3}
M = 1
valueM[] = {7}
Output: 7 0
Explanation: For the given two linked
list (6 3) and (7), after adding the
two linked list resultant linked list
will be (7 0).
*/

Node* reverseList(Node* head){
    Node* curr = head, *prev = NULL, *nextp = NULL;
    while(curr != NULL){
        nextp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextp;
    }
    head = prev;
}
Node* addListsFunc(Node* first, Node* second){
    Node* res = new Node(0);
    Node* p = res;
    int carry = 0;
    while (first || second || carry) {
        int sum = (first ? first->data : 0) + (second ? second->data : 0) + carry;
        carry = sum / 10;
        p->next = new Node(sum % 10);
        p = p->next;
        first = first ? first->next : first;
        second = second ? second->next : second;
    }
    return res->next;
}
//main function 
struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    // code here
    if (first == NULL) 
        return second;
    if (second == NULL) 
        return first;
        
    first = reverseList(first);
    second = reverseList(second);
    
    Node* res = addListsFunc(first, second);
    
    res = reverseList(res);
}
