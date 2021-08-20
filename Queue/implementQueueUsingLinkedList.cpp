class Queue { 
    struct QNode { 
        int data; 
        QNode* next; 
        QNode(int d){ 
            data = d; 
            next = NULL; 
        } 
    }; 
    QNode *front, *rear; 
    public:
  		// Constructor
        Queue(){
        }
  		// Add an element to the queue
        void enQueue(int x){
			QNode* newNode = new QNode(x);
      if(rear == NULL){
          front = rear = newNode;
          return;
      }
      rear->next = newNode;
      rear = newNode;
        }
  		// Delete front element from the queue
        int deQueue() { 
			 if(front == NULL){
          return -1;
       }
        int temp = front->data;
        front = front->next;
        if (front == NULL){
            rear = NULL;
        }
        return temp;
        }
};
