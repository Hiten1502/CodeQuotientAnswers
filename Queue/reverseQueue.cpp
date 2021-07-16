void reverseQueue(Queue *queue){
  // Write your code here 
  int arr[1000];
   int i = 0;
   while (!queue->isEmpty())
   {
       int temp = queue->deQueue();
       arr[i] = temp;
      i++;
   }
  for (int j = i-1; j >= 0; j--)
  {
    int x = arr[j];
    queue->enQueue(x);
  }
}
