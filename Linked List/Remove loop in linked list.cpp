void removeLoop(Node* head)
{
    // code here
    // just remove the loop without losing any nodes
    Node *sp = head, *fp = head;
    while(true){
        sp = sp->next;
        if(fp->next != NULL){
            fp = fp->next->next;
        }
        else{
            return;   //No loop
        }
        if(sp == NULL || fp == NULL) return;   //No loop
        if(sp == fp) break;                  //Loop exists
    }
    //for cases like 7->58->36->34->16->(start of the loop)
    //here sp = fp = head
   if(sp == head){
        while(sp->next!=head){
            sp = sp->next;
        }
    sp->next = NULL;
    return;
    }
    //otherwise make the sp point to head and move both sp and fp at the same pace
    //Now when sp=fp, that node will be the start of the loop
    sp = head;
    while(sp->next != fp->next){
        sp = sp->next;
        fp = fp->next;
    }
    
    fp->next = NULL;
}
