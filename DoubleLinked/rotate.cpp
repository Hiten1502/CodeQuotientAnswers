void insertAtBeg(Node **head , int data){
    Node *node = new Node(data);
    node->data = data;
    node->next = *head;
    node->prev = NULL;
    if(head != NULL){
        (*head)->prev = node;
    }
    *head = node;
}
int deleteAtEnd(Node *head){
    Node *last = head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    int x = last->data;
    last->prev->next = NULL;
    delete(last);
    return x;
}
Node* rotateByK(Node* head, int k)
{
	 if(head == NULL){
        return head;
    }
    for (int i = 0; i < k; i++)
    {
        int x = deleteAtEnd(head);
        insertAtBeg(&head,x);
    }
    return head;
}
