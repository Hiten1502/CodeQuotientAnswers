void printInorder(struct Node* root)
{
	if(root != NULL){
        printInorder(root->left);
        cout<<root->data<<" ";
        printInorder(root->right);
    }
}
