void inorder(Node* root){
  if(root != NULL){
      inorder(root->left);
      printf("%d ",root->data);
      inorder(root->right);
  }
}
void preorder(Node* root){
  if(root != NULL){
      printf("%d ",root->data);
      preorder(root->left);
      preorder(root->right);
  }
}
void postorder(Node* root){
  if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
