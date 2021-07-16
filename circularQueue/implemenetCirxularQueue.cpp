void QueueArray::enQueue(int data){
   if((front == 0 && rear == SIZE-1)
    || rear == (front-1)%(SIZE-1)){
        return;
    } 
    if(front == -1){
        front = rear = 0;
    }
    else if(rear == SIZE-1 && front != 0){
        rear = 0;
    }
    else{
        rear++;
    }
    queue[rear] = data;
}
// Remove First element from queue
int QueueArray::deQueue(){
   if(front == -1){
        return -1;
    }
    int item = queue[front];
    if(front == rear){
        front = rear = -1;
    }
    else if(front == SIZE-1){
        front = 0;
    }
    else{
        front++;
    }
    return item;
}
