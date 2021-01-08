#include<unordered_set>
Node * removeDuplicates( Node *head) 
{
 // your code goes here
    unordered_set<int> s;
 
    /* Pick elements one by one */
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        // If set contains the curr->data
        if (s.find(curr->next->data) != s.end())
        {
           curr->next = curr->next->next;
        }
        else
        {
           s.insert(curr->data);
           curr = curr->next;
        }
        curr = prev->next;
    }
    return head;
}
