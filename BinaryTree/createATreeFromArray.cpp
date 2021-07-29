struct Node * createBT(int arr[],Node *root,int i,int n){
    if(i<n){
        Node *temp = newNode(arr[i]);
        root = temp;
        root->left = createBT(arr,root->left,2*i+1,n);
        root->right = createBT(arr,root->right,2*i+2,n);
    }
    return root;
}
struct Node* buildTree(int t[], int n){
    int i = 0;
    Node *root = createBT(t,root,i,n);
    return root;
}
