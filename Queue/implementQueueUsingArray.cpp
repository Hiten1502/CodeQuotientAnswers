void enqueue(int item)
{
	if(rear == SIZE){
      return;
    }
    if(front == -1 && rear == -1){
      front++;
      rear++;
    }
    else{
      rear++;
    }
    array[rear] = item;
}
// Method to remove an item from queue.
int dequeue()
{
	if(front>rear){
    return -1;
  }
  int item = array[front];
  front++;
  return item;
}
