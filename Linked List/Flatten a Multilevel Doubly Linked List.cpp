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
        for (Node* h = head; h; h = h->next)
        {
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
        }
        return head;
    }
};
