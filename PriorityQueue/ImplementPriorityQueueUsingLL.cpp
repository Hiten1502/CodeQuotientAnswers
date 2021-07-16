# include<bits/stdc++.h>
class PriorityQueue{
    Node *front, *rear;
    public:
      PriorityQueue(){
        front = NULL;
        rear = NULL;
      }
    void enQueue(int data,int priority){
      Node *tmp , *q;
      tmp = new Node(data,priority);
      if(front == NULL || priority < front->priority){
        tmp->next = front;
        front = tmp;
      }
      else{
        q = front;
        while (q->next != NULL && q->next->priority <= priority)
        {
          q = q->next;
        }
        tmp->next = q->next;
        q->next = tmp;
      }
    }
  	int deQueue(){
          Node *tmp;
          if(front == NULL){
              cout<<"Queue Underflow\n";
              return -1;
          }
          else
          {
            tmp = front;
            int x = tmp->data;
            // cout<<tmp->data<<" ";
            front = front->next;
            free(tmp);
            return x;
          }
          return -1;		
    }
};
