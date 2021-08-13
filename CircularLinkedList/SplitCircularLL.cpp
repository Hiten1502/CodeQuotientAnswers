Node* listCut(Node* head){
  
  Node *head1=NULL;
  Node *head2=NULL;
  
  Node *temp1=head;
  Node *temp2=head;
  
  if(head==NULL)	return head;
  
  while(temp2->next!=head && temp2->next->next!=head){
    temp2=temp2->next->next;
    temp1=temp1->next;
  }
  if(temp2->next->next==head)	temp2=temp2->next;
  
  head1=head;
  if(head->next!=head)	head2=temp1->next;
  temp2->next=temp1->next;
  temp1->next=head;
  
  return head1,head2;
}
