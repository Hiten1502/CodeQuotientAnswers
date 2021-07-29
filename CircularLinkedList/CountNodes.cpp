int countNodes(Node* head){
   int length = 0;
    if(head == NULL){
        return 0;
    }
    Node *p = head;
    while (p->next != head)
    {
        length++;
        p = p->next;
    }
    return length+1;
}
