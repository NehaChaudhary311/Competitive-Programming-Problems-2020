Node *copyList(Node *head) {
    // Your code here
    map<Node*, Node*> m;
        int i=0;
        Node* ptr = head;
        while (ptr) {
            m[ptr] = new Node(ptr->data);
            ptr = ptr->next;
        }
        ptr = head;
        while (ptr) {
            m[ptr]->next = m[ptr->next];
            m[ptr]->arb = m[ptr->arb];
            ptr = ptr->next;
        }
        return m[head];
}
