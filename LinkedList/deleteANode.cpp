void deleteNodeK(Node* node){
    if(node == NULL){
      return;
    }
    if (node->next == NULL)
    {
        //free(node);
        return;
    }
    Node* temp = node->next;
    node->data = temp->data;
    node->next = temp->next;
    free(temp);
}
