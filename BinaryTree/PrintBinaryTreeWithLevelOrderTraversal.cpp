# include<queue>
void printLevelWise(struct Node* root){
  	if (root == NULL){ 
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        int nodeCount = q.size();
        while (nodeCount>0)
        {
            Node *node = q.front();
            cout<<node->data;
          	if(nodeCount>1){
              cout<<" ";
            }
            q.pop();
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
            nodeCount--;
        }
        cout<<"\n";
    }
}
