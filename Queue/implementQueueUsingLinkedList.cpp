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
			
        }
  		// Delete front element from the queue
        int deQueue() { 
			
        }
};
