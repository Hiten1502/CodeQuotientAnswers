int isBinarySearchTree(struct Node* t1){
 	static struct Node *prev = NULL;
    if(t1 != NULL){
        if(!isBinarySearchTree(t1->left)){
            return 0;
        }
        if(prev != NULL && t1->data <= prev->data){
            return 0;
        }
        prev = t1;
        return isBinarySearchTree(t1->right);
    }
    else{
        return 1;
    }
}
