Node* deleteBeg(Node* head){
  	Node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = head->next;
    int x = head->data;
    delete head;
    head = p->next;
    return head;
}
Node* deleteEnd(Node* head){
  	Node *p = head;
    while (p->next->next != head)
    {
        p = p->next;
    }
    Node *q = p->next;
    p->next = head;
    delete q;
    return head;
}
