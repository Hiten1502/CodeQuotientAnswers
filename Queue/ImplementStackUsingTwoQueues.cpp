class Stack
{
  public:
  void push(QueueArray* qa1, QueueArray* qa2, int item)
  {
     while (!(qa1->front > qa1->rear))
      {
          qa2->enqueue(qa1->dequeue());
      }
      qa1->enqueue(item);
      while (!(qa2->front > qa2->rear))
      {
          qa1->enqueue(qa2->dequeue());
      }
  }
  int pop(QueueArray* qa1, QueueArray* qa2)
  {
    if((qa1->front > qa1->rear)){
          return -1;
      }
      int x = qa1->dequeue();
      return x;
  }
};
