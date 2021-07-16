/* push(int), pop(), isEmpty(), isFull() are available on Stack. */
class Queue
{
  //Beaware to do it public
  public:
  void enqueue(CQStack *st1, CQStack *st2, int item)
  {
		st1->push(item);
  }
  int dequeue(CQStack *st1, CQStack *st2)
  {
		if(st2->isEmpty() && st1->isEmpty()){
          return -1;
        }
        if(st2->isEmpty()){
            while (!st1->isEmpty())
            {
                st2->push(st1->pop());
            }
        }
        int temp = st2->pop();
        return temp;
  }
};
