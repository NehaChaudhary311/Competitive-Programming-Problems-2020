/*
https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/

lets say we start out with :

h    
1 - 2 - 3 - 4 - 5 - null
    |
    6 - 7 - 8 - null
            |
            9 - 10 - null

h points to the head of the structure
horizontal links are bidirectional
vertical links indicate child relationship

after the first child is encountered:

        h
1 - 2 - 6 - 7 - 8 - 3 - 4 - 5 - null
                |
                9 - 10 - null

after the second child is encountered:

                    h
1 - 2 - 6 - 7 - 8 - 9 - 10 - 3 - 4 - 5 - null

*/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* h = head;
        while(h != NULL){
            if (h->child)
            {
                Node* next = h->next;
                h->next = h->child;
                h->next->prev = h;
                h->child = NULL;
                Node* p = h->next;
                while (p->next) p = p->next;
                p->next = next;
                if (next) next->prev = p;
            }
            h = h->next;
        }
        return head;
    }
};

//STACK APPROACH - not working though
class Solution {
public:
    Node* flatten(Node* head) {
        if(!head) return head;
        Node* h = head;
        stack<Node*> stk;
        while(h->next != NULL){
            if(h->child){
                if(h->next){
                    stk.push(h->next);
                }
                h->next = h->child;
                h->child = NULL;
            }
            else if(h->next == NULL && !stk.empty()){
                Node* tmp = stk.top();
                stk.pop();
                h->next = tmp;
            }
            //to create the prev link we are using 'if' and not 'else if'
            if(h->next){
                h->next->prev = h;
            }
            h = h->next;
        }
    
    return head ;
    }
};
