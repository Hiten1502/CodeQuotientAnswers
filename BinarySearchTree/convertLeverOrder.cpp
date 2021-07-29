struct Node * insert(Node *root,int key){
    if(root == NULL){
        Node *temp = newNode(key);
        return temp;
    }
    if(key < root->data){
        root->left = insert(root->left,key);
    }
    else if(key > root->data){
        root->right = insert(root->right,key);
    }
    return root;
}
Node* buildSearchTree(int t[], int n){
  if(n == 0){
    return NULL;
  }
    Node* root = newNode(t[0]);
    for (int i = 1; i < n; i++)
    {
        insert(root,t[i]);
    }
    return(root);
}
