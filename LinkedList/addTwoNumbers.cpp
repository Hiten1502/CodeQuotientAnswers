Node* addListNumbers(Node* head1,Node* head2){
  	int x = 0;
    int i = 0;
    while (head1 != NULL)
    {
      int m = head1->data;
      x = m*pow(10,i) + x;
      i++;
      head1 = head1->next;
    }
    int y = 0;
    int j = 0;
    while (head2 != NULL)
    {
      int m = head2->data;
      y = m*pow(10,j) + y;
      j++;
      head2 = head2->next;
    }
    int sum = x+y;
    Node *ptr = NULL;
    while (sum > 0 )
    {
      int x = sum%10;
      insertEnd(&ptr ,x);
      sum = sum/10;
    }
    return ptr;
}
