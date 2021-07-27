void swapNodes(Node** head, int x, int y){
  		if(x == y){
       return;
   }
    Node *prevX = NULL , *currX = *head;
    while (currX && currX->data != x)
    {
        prevX = currX;
        currX = currX->next;
    }
    Node *prevY = NULL , *currY = *head;
    while (currY && currY->data != y)
    {
        prevY = currY;
        currY = currY->next;
    }
    if(currX == NULL || currY == NULL){
        return;
    }
    if(prevX != NULL){
        prevX->next = currY;
    }
    else{
        *head = currY;
    }
    if(prevY != NULL){
    prevY->next = currX;
    }
    else{
        *head = currX;
    }
    Node *temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
}
