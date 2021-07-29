Node *ptr = NULL;
void giveReverse(Node *head){
  ptr = NULL;
    if(head != NULL){
      giveReverse(head->next);
      insertEnd(&ptr,head->data);
    }
}
struct Node* reverseList(struct Node* head) {
    giveReverse(head);
  	return ptr;
}
