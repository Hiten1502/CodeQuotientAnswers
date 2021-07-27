Node* rearrangeList(Node* head){
   int i = 1;
    Node *even = NULL;
    Node  *odd = NULL;
    Node *last = head;
    while (last != NULL)
    {
      if(i%2 == 0){
        even = insertEnd(even , last->data);
      }
      if(i%2 != 0){
        odd = insertEnd(odd , last->data);
      }
      last = last->next;
      i++;
    }
    Node *final = NULL;
    while (even != NULL)
    {
      final = insertEnd(final , even->data);
      even = even->next;
    }
    while (odd != NULL)
    {
      final = insertEnd(final , odd->data);
      odd = odd->next;
    }
    return final;
}
