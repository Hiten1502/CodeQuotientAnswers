void forwardPrint(struct Node* head)
{
	if(head != NULL){
      cout<<head->data<<"-";
      forwardPrint(head->next);
    }
}
void backwardPrint(struct Node* head)
{
	if(head != NULL){
    backwardPrint(head->next);
    cout<<head->data<<"-";
  }
}
