# include<bits/stdc++.h>
int checkPalindrome(struct Node* head) 
{
    if(head == NULL){
        return 0;
    }
	Node *ptr = head;
    stack<int> s;
    while (ptr != NULL)
    {
        s.push(ptr->data);
        ptr = ptr->next;
    }
    while (head != NULL)
    {
      int i = s.top();
      s.pop();
      if(head->data != i){
        return 0;
      }
      head = head->next;
    }
  return 1;
}
