class LinkStack{
  LinkList *first; // ref to first item on list
  int size;
  public:
    LinkStack(){
      	first = NULL;
        size = 0; 
    }
    bool isEmpty(){
		return first == NULL;
    }
    void push(int dd){
		LinkList *ptr = new LinkList(dd);
        ptr->next = first;
        first = ptr;
        size ++;
    }
    int pop(){
		if(isEmpty()){
            return -1;
        }
        size--;
        int temp = first->data;
        first = first->next;
        return temp;
    }
};
