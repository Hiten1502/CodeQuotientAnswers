Node* insertBeg(Node* head, int data){
  	 Node *ptr = new Node();
    ptr->data = data;
    ptr->next = NULL;
    Node *temp ;
    if(ptr == NULL){
        printf("\nOVERFLOW");
    }
    else{
        if(head  == NULL){
            head = ptr;
            ptr->next = head;
        }
        else{
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            ptr->next = head;
            temp->next = ptr;
            head = ptr;
        }
    }
}
Node* insertEnd(Node* head, int data){
  Node *ptr = new Node();
    ptr->data = data;
    ptr->next = NULL;
    Node *temp ;
    if(ptr == NULL){
        printf("\nOVERFLOW");
    }
    else{
        if(head  == NULL){
            head = ptr;
            ptr->next = head;
        }
        else{
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = head;
            return head;
        }
    }
}
